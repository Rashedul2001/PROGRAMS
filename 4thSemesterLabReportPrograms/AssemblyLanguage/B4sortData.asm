.model small
.stack 100h
.data
    array   db  2, 4, 7, 3, 1, 6, 9, 5, 5, 8
    arrSize equ ($- array)
    message db  'Sorted array: $'

.code
main proc
            mov  ax, @data
            mov  ds,ax
            mov  cl, arrSize
            dec cl
            mov dl,arraySize
            lea  si, array
            lea  bx, array

            lea  dx, message
            mov  ah,09h
            int  21h

upperLoop:
LowerLoop:
        inc bx
    cmp [si],[bx]
    jle incre
    xchg si,bx
    incre:








eixt:
            mov  ah,4ch
            int  21h
main endp
end main
