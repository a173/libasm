global	_ft_strcpy

section	.text
_ft_strcpy:
	mov	rcx, -1
.copy:
	inc	rcx
	mov	dl, byte [rsi + rcx]
	mov	byte [rdi + rcx], dl
	cmp	dl, 0
	jnz	.copy
	mov	rax, rdi
	ret