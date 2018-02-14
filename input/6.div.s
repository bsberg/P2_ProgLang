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
        movq $51, %rbx
        movq $17, %r8
        movq %r8, %rcx
        movq %rbx, %rax
        cqo
        idivq %rcx
        movq %rax, %rbx
        movq %rbx, %rsi
        movq $0, %r8
        movq $.int_wformat, %rdi
        call printf
        movq $100, %rbx
        movq $_gp, %r8
        addq $0, %r8
        movq %rbx, (%r8)
        movq $2, %rbx
        movq $_gp, %r8
        addq $16, %r8
        movq %rbx, (%r8)
        movq $5, %rbx
        movq $_gp, %r8
        addq $24, %r8
        movq %rbx, (%r8)
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq $_gp, %rax
        addq $16, %rax
        movq (%rax), %r9
        movq %r9, %rcx
        movq %r8, %rax
        cqo
        idivq %rcx
        movq %rax, %r8
        movq $_gp, %rcx
        addq $24, %rcx
        movq (%rcx), %r9
        movq %r9, %rcx
        movq %r8, %rax
        cqo
        idivq %rcx
        movq %rax, %r8
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
