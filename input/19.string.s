        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
	.string_const0: .string "Your grader"
	.string_const1: .string "will put"
	.string_const2: .string "a random"
	.string_const3: .string "string here"
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
        movq $.string_const1, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $.string_const2, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        movq $.string_const3, %rbx
        movq %rbx, %rsi
        movq $0, %r9
        movq $.str_wformat, %rdi
        call printf
        leave
        ret
