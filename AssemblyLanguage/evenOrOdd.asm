.model small
print MACRO msg
lea dx, msg
mov ah, 09h
int 21h
    
ENDM
    
.stack 
.data
msg1 db 13,10, 'Enter the number: $'
msg2 db 0dh,0ah, 'the number is Even$'
msg3 db 13,10, 'the number is odd$'

.code
;description
main PROC
    mov ax, @data
    mov ds, ax
    print msg1
    mov ah, 01h
    int 21h    
    
    sub al, 30h
    mov bl, 02
    div bl 
    cmp ah, 00
    jz s2
    print msg3
    jmp l4
    s2:
    print msg2
    l4:
    
    
    
    
    mov ah,4ch
    int 21h
main ENDP
end main
