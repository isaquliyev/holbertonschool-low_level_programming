section .data
    message db 'Hello, World', 10, 0
section .text
    global main
    extern printf
main:
    push    message
    call    printf
    add     esp, 4
    ret
