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
        addq $16, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r9
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r10
        addq %r9, %r10
        cmpq %r10, %r8
        movq $0, %r8
        movq $1, %r10
        cmovl %r10, %r8
        movq $_gp, %rbx
        addq $32, %rbx
        movq %r8, (%rbx)
        movq $_gp, %rbx
        addq $32, %rbx
        movq (%rbx), %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        imulq %r8, %r9
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r10
        imulq %r8, %r10
        cmpq %r10, %r9
        movq $0, %r9
        movq $1, %r10
        cmovg %r10, %r9
        movq %r9, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        imulq %r8, %r9
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r10
        addq %r8, %r10
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r8
        addq %r10, %r8
        cmpq %r8, %r9
        movq $0, %r9
        movq $1, %r8
        cmovg %r8, %r9
        movq %r9, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r10
        cmpq %r10, %r9
        movq $0, %r9
        movq $1, %r10
        cmovg %r10, %r9
        imulq %r8, %r9
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r8
        addq %r9, %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        addq %r8, %r9
        movq %r9, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
