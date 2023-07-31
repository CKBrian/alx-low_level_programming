section .data
    hello db 'Hello, Holberton', 0

section .text
    global my_start     ; Rename the entry point label

    extern printf

my_start:
    lea rdi, [hello]
    xor rax, rax
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall

