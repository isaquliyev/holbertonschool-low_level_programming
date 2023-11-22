global  main
    extern  printf

    section .text
main:
    push    message
    call    printf
    add     esp, 4
    ret
message:
    db  'Hello, World', 10, 0
