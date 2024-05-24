.model small
.stack 100h
.data
    array   db  2, 4, 7, 3, 1, 6, 9, 5, 5, 8
    arrSize equ ($- array)
    message db  'Average is: $'

.code
main proc
            mov  ax, @data
            mov  ds,ax
            mov  cx, arrSize
            lea  si, array

            lea  dx, message
            mov  ah,09h
            int  21h

            mov  ax, 0
            mov  bx, 0

    sumLoop:
            mov  al, [si]
            add  bx,ax
            inc  si
            loop sumLoop

            mov  ax,bx
            mov  cx, arrSize
            mov  dx, 0          ; divident is considered as dx:ax both
            div  cx             ; quotient is in ax and remainder is in dx  so if you want to get
    ; fractional part multiply with 10 and again divide it

            mov  dl, '0'
            add  dl,al

            mov  ah, 02
            int  21h

            mov  ah,4ch
            int  21h
main endp
end main
