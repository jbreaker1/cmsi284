        global main
        extern printf
        extern atoi
        section .text
main:

        add rsi, 8
        mov rdi, [rsi]
        call atoi

        push rax                ; save year
        xor rdx, rdx            ; clear
        div qword [fourhundred] ; mod year by 400
        cmp rdx, 0
        jz printLeapYear        ; if divisible by 400 it is a leap year

        pop rax                 ; load year
        push rax                ; save year
        xor rdx, rdx
        div qword [hundred]     ; divide year by 100
        cmp rdx, 0
        jz printError           ; if divisible 100 it is not a leap year
        pop rax                 ; load year
        push rax                ; save year
        xor rdx, rdx
        div qword [four]        ; divide year by 4
        cmp rdx, 0
        jz printLeapYear        ; if divisible by 4 it is a leap year
        jnz printError          ; else it is not a leap year


printLeapYear:
        pop rax
        mov rsi, rax
        mov rdi, message
        xor rax, rax
        call printf
        ret

printError:
        pop rax
        mov rsi, rax
        mov rdi, error
        xor rax, rax
        call printf
        ret

fourhundred:
        dq 400
hundred:
        dq 100
four:
        dq 4

message:
        db "%d is a leapyear", 10, 0
error:
        db "%d is not a leapyear", 10, 0
