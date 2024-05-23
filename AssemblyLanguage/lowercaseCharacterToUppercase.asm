.model small
.stack 100h
.data
inLowMsg db 10,13,"Enter Lower Case Letter: $"
inUpMsg db 10,13,"Enter Upper Case Letter: $"
outLowMsg db 10,13,"Your Lower Case Letter: $"
outUpMsg db 10,13,"Your Upper Case Letter: $"
.code
main proc
mov ax, @data
mov ds, ax

mov ah,09h
lea dx, inLowMsg
int 21h

mov ah, 01h
int 21h
mov bl, al
sub bl,20h ;32 in decimal

mov ah,09h
lea dx, outUpMsg
int 21h
mov ah, 02h
mov dl,bl
int 21h

mov ah,09h
lea dx, inUpMsg
int 21h

mov ah, 01h
int 21h
mov bl, al
add bl,20h ;32 in decimal

mov ah,09h
lea dx, outLowMsg
int 21h
mov ah, 02h
mov dl,bl
int 21h





mov ah, 4ch
int 21h
main endp
end main








