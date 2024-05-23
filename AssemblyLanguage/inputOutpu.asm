.model small
.stack 100h
.data
a db "Enter a Number: $"
b db 10,13,"Your Number is: $"
.code
main PROC
     mov ax,@data
     mov ds,ax

     mov ah, 9
     lea dx, a 
     int 21h

     mov ah, 1
     int 21h        ;input
     mov bl, al

     mov ah, 9
     lea dx, b 
     int 21h

     mov ah, 2
     mov dl, bl     ;output
     int 21h

exit:
     mov ah, 4ch
     int 21h

main ENDP
end main