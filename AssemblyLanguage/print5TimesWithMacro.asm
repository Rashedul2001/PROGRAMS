.model small
print macro msg
          lea dx, msg
          mov ah, 09h
          int 21h
endm
.data
    msg1 db 0dh, 0ah,"CSE$"
.code
main PROC
          mov   ax, @data
          mov   ds,ax
          mov   cx,5
    loop1:
          dec   cx
          cmp   cx,00
          print msg1
          ja    loop1
          jmp   Exit
    Exit: 
          mov   ah, 4ch
          int   21h
main ENDP
end main