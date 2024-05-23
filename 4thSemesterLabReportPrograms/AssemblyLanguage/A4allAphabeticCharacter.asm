.model small
.stack 256
.code
main proc
mov cx,26
mov dl,'A'
lp:
mov ah,02
int 21h
dec cx
inc dl
cmp cx,0
jnz lp



mov ah,4ch
int 21h

main endp
end main