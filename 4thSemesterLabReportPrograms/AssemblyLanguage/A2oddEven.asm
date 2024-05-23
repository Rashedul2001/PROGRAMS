.model small
.stack 100h
.data
    msg  db "Enter a One Digit Number: $"
    oddMsg  db 10,13,"The Number is Odd. $"
    evMsg   db 10,13,"The Number is even. $"
.code
main proc
         mov  ax, @data
         mov  ds, ax

         mov  ah, 9h
         lea  dx, msg
         int  21h

         mov  ah, 01h
         int  21h
         sub  al,48

         mov  dl, 2
         sub  dl,48
         div  dl

         test ah,1
         jz   ev
         jnz  odd



    odd: 
         mov  ah, 9h
         lea  dx, oddMsg
         int  21h
         jmp  exit
    ev:  
         mov  ah, 9h
         lea  dx, evMsg
         int  21h
         jmp  exit




    exit:
         mov  ah, 4ch
         int  21h
main endp
end main



