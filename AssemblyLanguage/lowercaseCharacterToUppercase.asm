.model small
.stack
.data
    lowercase db 'a', '$'
    uppercase db 0, '$'
.code
main proc
         mov ax, @data
         mov ds, ax

         mov al, lowercase
         sub al, 32
         mov uppercase, al

         mov ah, 09h
         mov dx, offset uppercase
         int 21h

         mov ah, 4ch
         int 21h
main endp
end main

