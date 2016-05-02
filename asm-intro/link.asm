	global main
	section .text

main: 
	add rsi, 8
	mov rax, 86
	mov rdi, [rsi]
	add rsi, 8
	mov rsi, [rsi]
	syscall
