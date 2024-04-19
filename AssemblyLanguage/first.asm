.model small
.stack 100h

.data
    hello_msg db 'What''s up', 0

.code
main:
    mov ax, @data       ; Set up data segment
    mov ds, ax

    mov ah, 09h         ; AH=09h to print string
    mov dx, offset hello_msg ; DS:DX points to the string
    int 21h             ; Call DOS interrupt

    mov ah, 4Ch         ; AH=4Ch to terminate program
    int 21h             ; Call DOS interrupt
end main
