.model small
.stack 256
.data
a db ?
.code
main proc
mov ax, @data
mov ds, ax

mov ah, 01
int 21h
sub al, 48
mov a, al

mov ah, 01
int 21h
sub al, 48
mul a 

aam 

mov bx, ax
mov ah, 02
mov dl, bh
add dl, 48
int 21h

mov ah, 02
mov dl, bl
add dl, 48
int 21h


Exit:
mov ah, 4ch
int 21h
main endp
end main