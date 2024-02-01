section .data
    hello_msg db "Hello, Holberton", 10, 0  ; Message to be printed, followed by newline and null terminator

section .text
    extern printf  ; Declare printf as an external symbol

global _start

_start:
    ; Prepare arguments to call printf
    mov rdi, hello_msg  ; Load address of the message string into rdi
    xor rax, rax       ; Clear rax to indicate no floating-point arguments
    call printf        ; Call printf function

    ; Exit the program
    mov rax, 60        ; System call number for exit
    xor rdi, rdi       ; Clear rdi (exit code 0)
    syscall            ; Call kernel


