        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
        .comm _gp, 48, 4
	.string_const0: .string "i = "
	.string_const1: .string "j = "
	.string_const2: .string "k = "
	.string_const3: .string "l = "
	.string_const4: .string "m = "
        .text
        .globl main
        .type main,@function
main:	nop
        pushq %rbp
        movq %rsp, %rbp
        movq $.string_const0, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $0, %rbx
        movq $.int_rformat, %rdi
        movq %rbx, %rsi
        movq $0, %r8
        call scanf
        movq $.string_const1, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $8, %rbx
        movq $.int_rformat, %rdi
        movq %rbx, %rsi
        movq $0, %r8
        call scanf
        movq $.string_const2, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $16, %rbx
        movq $.int_rformat, %rdi
        movq %rbx, %rsi
        movq $0, %r8
        call scanf
        movq $.string_const3, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $24, %rbx
        movq $.int_rformat, %rdi
        movq %rbx, %rsi
        movq $0, %r8
        call scanf
        movq $.string_const4, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $32, %rbx
        movq $.int_rformat, %rdi
        movq %rbx, %rsi
        movq $0, %r8
        call scanf
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
        addq $0, %rbx
        movq (%rbx), %r9
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r10
        cmpq %r10, %r9
        movq $0, %r9
        movq $1, %r10
        cmovne %r10, %r9
        notq %r9
        movq $-1, %rbx
        cmpq %rbx, %r9
        movq $0, %r9
        movq $1, %rbx
        cmove %rbx, %r9
        andq %r8, %r9
        movq $_gp, %rbx
        addq $40, %rbx
        movq %r9, (%rbx)
        movq $_gp, %rbx
        addq $40, %rbx
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
        movq $1, %rbx
        movq $_gp, %r8
        addq $32, %r8
        movq (%r8), %r10
        cmpq %r10, %rbx
        movq $0, %rbx
        movq $1, %r10
        cmovle %r10, %rbx
        orq %r9, %rbx
        movq %rbx, %rsi
        movq $0, %r8
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
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r10
        cmpq %r10, %r8
        movq $0, %r8
        movq $1, %r10
        cmovne %r10, %r8
        andq %r9, %r8
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        movq $_gp, %rbx
        addq $40, %rbx
        movq (%rbx), %r10
        cmpq %r10, %r9
        movq $0, %r9
        movq $1, %r10
        cmovg %r10, %r9
        orq %r8, %r9
        movq %r9, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r8
        movq $_gp, %rbx
        addq $8, %rbx
        movq (%rbx), %r9
        movq %r9, %rcx
        movq %r8, %rax
        cqo
        idivq %rcx
        movq %rax, %r8
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r9
        subq %r9, %r8
        movq $_gp, %rbx
        addq $32, %rbx
        movq (%rbx), %r9
        cmpq %r9, %r8
        movq $0, %r8
        movq $1, %r9
        cmovg %r9, %r8
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r9
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r10
        movq $_gp, %rbx
        addq $40, %rbx
        movq (%rbx), %r11
        imulq %r10, %r11
        addq %r9, %r11
        movq $_gp, %rbx
        addq $24, %rbx
        movq (%rbx), %r9
        movq $_gp, %rbx
        addq $16, %rbx
        movq (%rbx), %r10
        movq $_gp, %rbx
        addq $40, %rbx
        movq (%rbx), %r12
        imulq %r10, %r12
        addq %r9, %r12
        cmpq %r12, %r11
        movq $0, %r11
        movq $1, %r12
        cmovne %r12, %r11
        andq %r8, %r11
        movq %r11, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
