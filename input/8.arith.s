        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
        .comm _gp, 48, 4
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
        movq $7, %rbx
        addq %r8, %rbx
        movq $_gp, %r8
        addq $32, %r8
        movq %rbx, (%r8)
        movq $_gp, %rbx
        addq $32, %rbx
        movq (%rbx), %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r8
        movq $5, %rbx
        subq %rbx, %r8
        movq $_gp, %rbx
        addq $40, %rbx
        movq %r8, (%rbx)
        movq $_gp, %rbx
        addq $40, %rbx
        movq (%rbx), %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r9
        imulq %r8, %r9
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r8
        imulq %r9, %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r9
        imulq %r8, %r9
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r8
        subq %r8, %r9
        movq %r9, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r9
        addq %r8, %r9
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r10
        imulq %r8, %r10
        addq %r9, %r10
        movq %r10, %rsi
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
        movq %r8, %rcx
        movq %r9, %rax
        cqo
        idivq %rcx
        movq %rax, %r9
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        subq %r8, %r9
        movq %r9, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r9
        addq %r8, %r9
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r10
        movq $_gp, %rbx
        addq $32, %rbx
        movq (%rbx), %r11
        imulq %r10, %r11
        addq %r8, %r11
        imulq %r9, %r11
        movq $_gp, %rbx
        addq $40, %rbx
        movq (%rbx), %r8
        movq %r8, %rcx
        movq %r11, %rax
        cqo
        idivq %rcx
        movq %rax, %r11
        movq %r11, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
