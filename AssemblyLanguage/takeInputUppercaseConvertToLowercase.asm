.model small 
.data
    inputMessage  db 'Enter uppercase Letter: $'
    outputMessage db ' => $'
    newLine       db 0ah, '$'
    inputData     db ?
    outputData    db ?
.code
main proc
         mov ax, @data
         mov ds, ax
again:
         mov ah, 09h
         mov dx, offset inputMessage
         int 21h

         mov ah, 01h
         int 21h
         mov inputData, al

         mov ah, 09h
         mov dx, offset newLine
         int 21h
         cmp inputData, 'A'
         jl again
         cmp inputData, 'Z'
         jg again

         mov ah, 09h
         mov dx, offset newLine
         int 21h

         mov ah, 02h
         mov dl, inputData
         int 21h

         mov al, inputData
         add al, 32
         mov outputData, al

         mov ah, 09h
         mov dx, offset outputMessage
         int 21h

         mov ah, 02h
         mov dl, outputData
         int 21h

         mov ah, 4ch
         int 21h
main endp
end main
