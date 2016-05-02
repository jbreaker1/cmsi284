	global main
	section .text

main: 
	add rsi, 8
	mov rax, 87
	mov rdi, [rsi]
	syscall
