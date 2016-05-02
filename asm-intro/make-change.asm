global main
        extern printf
	extern atoi
        section .text
main:
        add rsi, 8                ; rsi points to change value
	mov rdi, [rsi]            ; store change value in rax
	call atoi

calculator:
        xor rdx, rdx              ; clear rdx
        div dword [quarter]       ; divide by 25
        mov r13,rdx
        mov rsi,rax
        mov rdi,quartermessage
        xor rax, rax
        call printf               ; print quotient (rax)
        mov rax, 0

        mov rax, r13              ; move remainder into rax
	xor rdx, rdx              ; clear rdx
	div dword [dime]          ; divide by 10
        mov r14, rdx              ; save remainder
        mov rsi, rax
        mov rdi, dimemessage
        xor rax, rax
        call printf               ; print quotient (rax)
        mov rax, 0

        mov rax, r14              ; move remainder into rax
        xor rdx, rdx              ; clear rdx
        div dword [nickel]        ; divide by 5
        mov r15, rdx              ; save remainder
        mov rsi, rax
        mov rdi, nickelmessage
        xor rax, rax
        call printf               ; print quotient
        mov rax, 0

        mov rax, r15              ; move remainder into rax
        xor rdx, rdx              ; clear rdx
        div dword [penny]         ; divide by 1
        mov r12, rdx              ; save remainder
        mov rsi, rax
        mov rdi, pennymessage
        xor rax, rax
        call printf               ; print quotient
        mov rax, 0
        ret

	section .data
quarter:

        dq 25

dime:

        dq 10

nickel:

        dq 5

penny:

        dq 1

quartermessage:
        db         "There are %lld quarters",10,0
dimemessage:
        db         "There are %lld dimes" ,10,0
nickelmessage:
        db         "There are %lld nickels" ,10,0
pennymessage:
        db         "There are %lld pennies" ,10,0
