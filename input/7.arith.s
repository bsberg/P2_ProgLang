        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
        .comm _gp, 40, 4
        .text
        .globl main
        .type main,@function
main:	nop
        pushq %rbp
        movq %rsp, %rbp
        movq $1, %rbx
        movq $_gp, %r8
        addq $0, %r8
        movq %rbx, (%r8)
        movq $2, %rbx
        movq $_gp, %r8
        addq $8, %r8
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
        addq $8, %rax
        movq (%rax), %r9
        addq %r8, %r9
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r8
        movq $_gp, %rcx
        addq $24, %rcx
        movq (%rcx), %r10
        imulq %r8, %r10
        addq %r9, %r10
        movq %r10, %rsi
        movq $0, %rdx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rdx
        addq $0, %rdx
        movq (%rdx), %r8
        movq $_gp, %rax
        addq $24, %rax
        movq (%rax), %r9
        movq $_gp, %rdx
        addq $0, %rdx
        movq (%rdx), %r10
        subq %r10, %r9
        movq $_gp, %rax
        addq $16, %rax
        movq (%rax), %r10
        movq %r10, %rcx
        movq %r9, %rax
        cqo
        idivq %rcx
        movq %rax, %r9
        addq %r8, %r9
        movq $_gp, %rcx
        addq $8, %rcx
        movq (%rcx), %r8
        addq %r9, %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
