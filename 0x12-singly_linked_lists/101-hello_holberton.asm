section .data
hello db 'Hello, Holberton', 0

section .text
global _start

_start:
; write syscall
mov eax, 4
mov ebx, 1
mov ecx, hello
mov edx, 16
int 0x80

; exit syscall
mov eax, 1
xor ebx, ebx
int 0x80
