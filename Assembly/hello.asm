section .data   ;declaration and initializaton of variables and macors
   name db "sankar", 0xA    ; declaring name variable and storing sankar
   name_len equ $ - name    ;  length of the name variable  

section .text     ;actual logc writting starts here
   global _start;

_start:
    mov eax,4    ; moves 4 to eax register meaning  write system call
    mov ebx,1    ;  moves 1 to ebx register mean  passing an argument stdout
    mov ecx,name  ; passing argument  moves name address to the register
    mov edx, name_len   ; bytes of the name variable
    int 0x80   ;system call