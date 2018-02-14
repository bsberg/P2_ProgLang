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
        subq %r8, %rbx
        movq %rbx, %rsi
        movq $0, %r8
        movq $.int_wformat, %rdi
        call printf
        movq $77, %rbx
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
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r9
        subq %r9, %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        subq %r9, %r8
        movq $_gp, %rbx
        addq $8, %rbx
        movq %r8, (%rbx)
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
