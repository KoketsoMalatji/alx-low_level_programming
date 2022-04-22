message db "Hello, Holberton",10, 0
section .text
global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 18
	syscall
