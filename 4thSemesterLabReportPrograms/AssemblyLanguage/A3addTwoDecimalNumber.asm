.model small
.stack 100h
.data
    first db 10,13,"Enter the First Number: $"
    second   db 10,13,"Enter the Second Number: $"
    sum db 10,13,"The sum is: $"
.code
main proc
         mov  ax, @data
         mov  ds, ax

         mov  ah, 9h
         lea  dx, first
         int  21h

         mov  ah, 01h
         int  21h
         sub  al,48

         mov  bl, al

         mov  ah, 9h
         lea  dx, second
         int  21h

         mov ah, 01h
         int 21h
         mov bh,al

         mov ah, 9
         lea  dx, sum
         int  21h

         add bh,bl
         mov dl,bh
         
         mov ah, 2
         int 21h
         ; can be improve to get multidigit addtion one way is to cmp to ans and 9 and print 

    exit:
         mov  ah, 4ch
         int  21h
main endp
end main



