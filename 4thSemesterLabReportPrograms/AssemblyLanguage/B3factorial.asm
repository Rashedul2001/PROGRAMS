;it's not working properly and I don't know why? 
; Now it works I still don't know why
.model small
.stack 100h
.data
    ms1          db 0ah,0dh,'Enter your Number(less then 9): $'
    ms2          db 10,13,'Your Factorial is: $'
    num          db ?
    resultBuffer db 6 dup ('$')
    ten          db 10
    ;result       dw 1
.code
main proc
                  mov  ax, @data
                  mov  ds,ax

                  mov  ah,09h
                  mov  dx, offset ms1
                  int  21h

                  mov  ah,01h
                  int  21h
                  sub  al,48
                  mov  num, al

                  mov  ah,09
                  lea  dx,ms2
                  int  21h

                  mov  al,num
                  cmp  al,1
                  jle  done

                  mov  ax,0001
                  mov  cl,num
                  mov  ch,00
    multiplyLoop: 
                  mul  cx
                  loop multiplyloop
              
                  mov  cx,0
                  mov  bx,offset resultbuffer
    setResultLoop:
                  mov  dx,0
                  div  word ptr [ten]
                  add  dl,'0'
                  mov  [bx],dl
                  inc  bx
                  inc  cx
                  cmp  ax,0
                  jne  setResultLoop


    printResult:  
                  dec  bx
                  mov  dl,[bx]
                  mov  ah,02h
                  int  21h
                  loop printResult
                  jmp  exit

    done:         
                  mov  ah,02
                  mov  dl,'1'
                  int  21h
    exit:         
                  mov  ax,4c00h
                  int  21h

main endp
end main
