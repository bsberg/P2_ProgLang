        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
        .comm _gp, 8, 4
	.string_const0: .string "input an integer:"
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
        movq $_gp, %rbx
        addq $0, %rbx
        movq (%rbx), %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        movq $1, %rbx
        movq %rbx, %rsi
        movq $0, %r8
        movq $.int_wformat, %rdi
        call printf
        movq $1, %rbx
        movq $2, %r8
        addq %rbx, %r8
        movq %r8, %rsi
        movq $0, %rbx
        movq $.int_wformat, %rdi
        call printf
        leave
        ret
