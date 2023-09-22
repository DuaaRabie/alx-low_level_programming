section .data
	hello db 'Hello, Holberton', 0Ah


section .text
	extern printf
	global main

main:
	mov	eci, hello
	mov	eax, 0
	call	printf
