section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 0
    newline db 10, 0  ; ASCII code for newline

section .text
    global main
    extern printf

main:
    sub rsp, 8      ; Align the stack
    mov rdi, format ; Load the format string
    mov rsi, hello  ; Load the address of the hello string
    xor rax, rax    ; Clear RAX register (used as return value)
    call printf     ; Call the printf function

    mov rdi, format ; Load the format string for newline
    mov rsi, newline ; Load the address of the newline string
    call printf     ; Call the printf function for newline

    add rsp, 8      ; Restore the stack
    ret             ; Return from the program

