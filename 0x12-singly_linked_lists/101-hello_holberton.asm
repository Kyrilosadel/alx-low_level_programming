section .data
hello db "Hello, Holberton", 0

section .text
extern printf

global main
main:
push hello
push format
call printf

xor eax, eax
ret

