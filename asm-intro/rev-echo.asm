	global main
	extern reverse_range_in_place
	extern puts
	extern printf
	extern strlen
	section .text
main:
	push    rdi                     ; save registers that puts uses
        push    rsi
        sub     rsp, 8                  ; must align stack before call
	
	mov	rdi, [rsi]
	call 	strlen
	mov	rdx, rax
	mov	rdi, [rsi]
	mov	rsi, 0
	push	rdi
	call	reverse_range_in_place
	pop	rdi
        call    puts                    ; print it

        add     rsp, 8                  ; restore %rsp to pre-aligned value
        pop     rsi                     ; restore registers puts used
        pop     rdi

        add     rsi, 8                  ; point to next argument
        dec     rdi                     ; count down
        jnz     main                    ; if not done counting keep going
        
	ret

	
