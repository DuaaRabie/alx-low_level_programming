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
			printf("NONE\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
	printf("  DATA:                              ");
	switch (elfh.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("NONE\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, Little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, Big endian\n");
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
			printf(" \n");
			break;
	}
}

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
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded) ABI\n");
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
	printf("  Type:                              ");
	switch (elfh.e_type)
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
	}
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
		dprintf(STDERR_FILENO, "elf_header: Warning: Nothing to do.\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(98);
	}
	size = read(fd, &elfh, sizeof(elfh));
	if (size == -1 || size != sizeof(elfh))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
	if (elfh.e_ident[0] != 0x7f || elfh.e_ident[1] != 'E')
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	if (elfh.e_ident[2] != 'l' || elfh.e_ident[2] != 'L')
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	if (elfh.e_ident[3] != 'F')
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	printf("ELF Header:\n");
	print_magic_class_data(elfh);
	print_version(elfh);
	print_os(elfh);
	printf("  ABI Version:                       ");
	printf("%d\n", elfh.e_ident[EI_ABIVERSION]);
	print_type(elfh);
	printf("  Entry point address:               %#lx\n", elfh.e_entry);

	return (0);
}
