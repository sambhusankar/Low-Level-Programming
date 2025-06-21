[BITS 16]          ; 16-bit real mode
[ORG 0x7C00]       ; BIOS loads boot sector to this address

start:
    ; Set up data segment
    xor ax, ax
    mov ds, ax

    mov si, hello_msg     ; Load address of string

print_loop:
    lodsb                 ; Load byte at DS:SI into AL, increment SI
    cmp al, 0             ; Check for null terminator
    je wait_key           ; If zero, end of string

    mov ah, 0x0E          ; BIOS teletype function
    mov bh, 0x00          ; Page number (always 0)
    mov bl, 0x07          ; Text attribute (light gray on black)
    int 0x10              ; Print character in AL

    jmp print_loop

wait_key:
    mov ah, 0x00          ; BIOS function: wait for key press
    int 0x16              ; Wait for key (no output)

halt:
    cli                   ; Disable interrupts
    hlt                   ; Halt CPU

hello_msg db 'Hello, Tiny OS! Press any key...', 0

; Pad with zeros up to 510 bytes, then add boot signature
times 510 - ($ - $$) db 0
dw 0xAA55                ; Boot sector signature

