        .section        .rodata
        .int_wformat: .string "%d\n"
        .str_wformat: .string "%s\n"
        .int_rformat: .string "%d"
	.string_const0: .string "Hello world!"
	.string_const1: .string "hello again!"
        .text
        .globl main
        .type main,@function
main:	nop
        pushq %rbp
        movq %rsp, %rbp
        movl $.string_const0, %eax
        movl %eax, %esi
        movl $0, %ecx
        movl $.str_wformat, %edi
        call printf
        movl $.string_const1, %eax
        movl %eax, %esi
        movl $0, %ecx
        movl $.str_wformat, %edi
        call printf
        leave
        ret
