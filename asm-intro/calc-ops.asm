  	 global gcd
         global addition
         global subtract
         section .text
gcd:
        cmp     rsi, 0                  ; y == 0?
        jne     method                      ; if not, go do work
        mov     rax, rdi                ; otherwise, just return x
        ret
method:
        mov     rax, rdi
        xor     rdx, rdx                ; rdx:rax <- x
        div     rsi                     ; rdx <- remainder
        mov     rdi, rsi                ; y
        mov     rsi, rdx                ; x % y
        call    gcd                    ; gcd(y, x % y)
        ret
end:
	mov	rax, rdi
	ret
addition:
	add	 rdi, rsi
	mov	 rax, rdi
	ret
subtract:
	mov	rax, rdi
        sub	rax, rsi
	ret
