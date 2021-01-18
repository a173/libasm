global	_ft_strdup

Extern	_malloc
Extern	_ft_strlen
Extern	_ft_strcpy
section	.text
_ft_strdup:
	call	_ft_strlen
	add		rax, 1
	push	rdi
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0
	jc		.error
	pop		rsi
	mov		rdi, rax
	call	_ft_strcpy
	ret
.error:
	mov		rax, 0
	ret