        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
        .comm _gp, 32, 4
        .text
        .globl main
        .type main,@function
main:	nop
        pushq %rbp
        movq %rsp, %rbp
        movq $10, %rbx
        movq $20, %r8
        imulq %rbx, %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $7, %rbx
        movq $_gp, %r8
        addq $0, %r8
        movq %rbx, (%r8)
        movq $3, %rbx
        movq $_gp, %r8
        addq $16, %r8
        movq %rbx, (%r8)
        movq $4, %rbx
        movq $_gp, %r8
        addq $24, %r8
        movq %rbx, (%r8)
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq $_gp, %rax
        addq $16, %rax
        movq (%rax), %r9
        imulq %r8, %r9
        movq $_gp, %rcx
        addq $24, %rcx
        movq (%rcx), %r8
        imulq %r9, %r8
        movq $_gp, %rdx
        addq $8, %rdx
        movq %r8, (%rdx)
        movq $_gp, %rdx
        addq $8, %rdx
        movq (%rdx), %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
