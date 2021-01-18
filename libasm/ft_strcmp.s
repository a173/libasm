global _ft_strcmp

section .text
_ft_strcmp:
	mov	rcx, -1
.comp:
	inc	rcx
	mov	dl, byte [rdi + rcx]
	cmp	dl, byte [rsi + rcx]
	jne	.var
	cmp	dl, 0
	jne	.comp
.var:
	movzx rax, dl
	movzx rdx, byte [rsi + rcx]
	sub rax, rdx
	ret
