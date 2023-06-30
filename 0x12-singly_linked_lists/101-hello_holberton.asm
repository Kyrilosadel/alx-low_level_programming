section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    push hello
    push format
    call printf

    mov rsp, rbp
    pop rbp
    mov eax, 0x60
    xor edi, edi
    syscall

