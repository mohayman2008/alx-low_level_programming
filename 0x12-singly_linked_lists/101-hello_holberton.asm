section .text
	default rel
	global _start
	extern printf
	global main

main:
	push rbp

	mov rdi, str
	mov rax, 0

	call printf wrt ..plt

	pop rbp
	mov rax, 0
	ret

section .data
	str: db "Hello, Holberton", 10, 0
