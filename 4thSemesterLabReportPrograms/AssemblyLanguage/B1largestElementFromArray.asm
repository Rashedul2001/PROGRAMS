.model small
.stack 100h
.data
    array          db  1, 3, 6, 2, 1, 6, 9, 4, 5, 8
    arrSize        equ ($- array)
    largestElement db  ?
.code
main proc
               mov  ax, @data
               mov  ds, ax

               mov  cx, arrSize
               dec cx
               lea  si, array

               mov  al,[si]
               mov  largestelement, al

    iterate:   
               inc  si
               mov  al, [si]
               cmp  al, largestelement
               jle  notLargest
               mov  largestelement,al
    
    notLargest:
               loop iterate

               mov dl,'0'
               add dl,[largestelement]

               mov  ah, 2
               int  21h
               
    exit:      
               mov  ah,4ch
               int  21h

main endp

end main 