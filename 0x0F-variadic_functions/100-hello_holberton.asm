section .data
	msg db 'Hello, Holberton', 0xa ;\n
	len equ $ - msg

section .bss
	num resb 5

section .text
	global main

main:
	; output the message
	mov eax, 4  		;system write
	mov ebx, 1  		;system stdout
	mov ecx, msg
	mov edx, len
	int 0x80  		;sys call

	; Exit code
	mov eax, 1
	mov ebx, 0
	int 0x80
