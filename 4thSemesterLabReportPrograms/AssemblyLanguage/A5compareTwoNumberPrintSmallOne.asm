.model small
.stack 100h
.data
    msg1   db 10,13,"Enter first number: $"
    msg2   db 10,13,"Enter second number: $"
    sm     db 10,13,"The smaller One is $"
    eqlmsg db 10,13,"The numbers are Equal $"
.code
main proc
           mov  ax, @data
           mov  ds, ax

           mov  ah, 9h
           lea  dx, msg1
           int  21h

           mov  ah, 01h
           int  21h
           mov  bl, al

           mov  ah, 9h
           lea  dx, msg2
           int  21h

           mov  ah, 01h
           int  21h
           cmp  al,bl
           js   first
           jg   second
           je   eqll

    first: 
           mov  ah, 9h
           lea  dx, sm
           int  21h

           mov  ah, 2h
           mov  dl, al
           int  21h
           jmp  exit

    second:
           xchg al,bl
           jmp  first

    eqll:  
           mov  ah, 9h
           lea  dx, eqlmsg
           int  21h


    exit:  
           mov  ah,4ch
           int  21h

main endp
end main