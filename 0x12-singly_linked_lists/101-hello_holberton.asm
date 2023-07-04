section .data
	format db "Hello, Holberton", 0
	printf_format db "%s", 0

section .text
	extern printf

global main

main:
	sub rsp, 8
	mov rdi, printf_format
	mov rsi, format
	xor rax, rax
	call printf

	mov eax, 60
	xor edi, edi
	syscall

section .note.GNU-stack:
