#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_magic_class_data - prints magic, class and data
 * @elfh: elf header
 * Return: nothing
 */
void print_magic_class_data(Elf64_Ehdr elfh)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elfh.e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	printf("  Class:                             ");
	switch (elfh.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
	printf("  Data:                              ");
	switch (elfh.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
	}
}

/**
 * print_version - print version
 * @elfh: elf header
 * Return: nothing
 */
void print_version(Elf64_Ehdr elfh)
{
	printf("  Version:                           %d", elfh.e_ident[EI_VERSION]);
	switch (elfh.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		case EV_NONE:
			printf("\n");
			break;
		break;
	}
}

void print_more_os(Elf64_Ehdr elfh);

/**
 * print_os - prints os/abi
 * @elfh: elf header
 * Return: nothing
 */
void print_os(Elf64_Ehdr elfh)
{
	printf("  OS/ABI:                            ");
	switch (elfh.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded) ABI\n");
			break;
		default:
			print_more_os(elfh);
			break;
	}
}

/**
 * print_more_os - prints more os
 * @elfh: elf header
 * Return: nothing
 */
void print_more_os(Elf64_Ehdr elfh)
{
	switch (elfh.e_ident[EI_OSABI])
	{
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Nove11 - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("<unknown: %x>\n", elfh.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_type - prints type
 * @elfh: elf header
 * Return: nothing
 */
void print_type(Elf64_Ehdr elfh)
{
	char *type = (char *)&elfh.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (elfh.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (type[i])
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", type[i]);
			break;
	}
}

/**
 * print_entry - prints entry
 * @elfh: elf header
 * Return: nothing
 */
void print_entry(Elf64_Ehdr elfh)
{
	unsigned char *hex = (unsigned char *)&elfh.e_entry;
	int i = 0, len = 0;

	printf("  Entry point address:               0x");

	if (elfh.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = elfh.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!hex[i])
			i--;
		printf("%x", hex[i--]);
		for (; i >= 0; i--)
			printf("%02x", hex[i]);
	}
	else
	{
		len = elfh.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!hex[i])
			i++;
		printf("%x", hex[i++]);
		for (; i <= len; i++)
			printf("%02x", hex[i]);
	}
			printf("\n");
}

/**
 * main - entry point
 * @ac: arguments count
 * @av: arguments vectors
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr elfh;
	int size;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(98);
	}
	size = read(fd, &elfh, sizeof(elfh));
	if (size < 1 || size != sizeof(elfh))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
		exit(98);
	}
	if (elfh.e_ident[0] != 0x7f || elfh.e_ident[1] != 'E')
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	if (elfh.e_ident[2] != 'L' || elfh.e_ident[3] != 'F')
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	printf("ELF Header:\n");
	print_magic_class_data(elfh);
	print_version(elfh);
	print_os(elfh);
	printf("  ABI Version:                       ");
	printf("%d\n", elfh.e_ident[EI_ABIVERSION]);
	print_type(elfh);
	print_entry(elfh);
	return (0);
}
