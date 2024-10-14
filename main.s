	.file	"p308.c"
	.text
	.section	.rodata
.LC0:
	.string	"%llu\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$1, -40(%rbp)
	movl	$1, -32(%rbp)
	movl	$0, -28(%rbp)
	movl	$0, -24(%rbp)
	movl	$0, -20(%rbp)
.L2:
	movl	-24(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-32(%rbp), %edx
	movl	-20(%rbp), %eax
	addl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	$1, %eax
	movl	%eax, %eax
	addq	%rax, -40(%rbp)
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -28(%rbp)
.L3:
	addq	$1, -40(%rbp)
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	je	.L4
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	je	.L5
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	cmpl	%eax, %edx
	cmovbe	%edx, %eax
	movl	%eax, -44(%rbp)
	movl	-20(%rbp), %eax
	subl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-24(%rbp), %eax
	subl	-44(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-32(%rbp), %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -32(%rbp)
	movl	-28(%rbp), %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-44(%rbp), %eax
	addl	%eax, %eax
	subl	$1, %eax
	movl	%eax, %eax
	addq	%rax, -40(%rbp)
	jmp	.L3
.L5:
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	je	.L13
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -20(%rbp)
	addq	$1, -40(%rbp)
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %eax
	addq	%rax, -40(%rbp)
	movl	-24(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-20(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L3
.L4:
	movl	-28(%rbp), %eax
	addl	%eax, %eax
	addl	$1, %eax
	movl	%eax, %eax
	addq	%rax, -40(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, -28(%rbp)
	jmp	.L3
.L13:
	nop
.L7:
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -20(%rbp)
	addq	$1, -40(%rbp)
	movl	-32(%rbp), %eax
	cmpl	$104743, %eax
	jne	.L8
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jne	.L8
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jne	.L8
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	je	.L14
.L8:
	addq	$1, -40(%rbp)
	jmp	.L2
.L14:
	nop
.L9:
	movq	-40(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 14.1.1 20240720"
	.section	.note.GNU-stack,"",@progbits
