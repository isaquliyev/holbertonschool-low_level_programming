section .data
	txt db "Hello, World", 0xA
global main
main:
	MOV rax, 0x1
	MOV rdi, 0x1
	MOV rsi, txt
	MOV rdx, 13
	SYSCALL

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL
