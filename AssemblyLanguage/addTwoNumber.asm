.model small
.stack 100h

.data
    message1 db 'Enter first number: $'
    message2 db 'Enter second number: $'
    result_message db 'The sum is: $'
    newline db 10, 13, '$'  ; newline characters

    num1 db 6 dup(?)   ; allocate space for the first number
    num2 db 6 dup(?)   ; allocate space for the second number
    result db 7 dup(?) ; allocate space for the result

.code
main:
    mov ax, @data       ; Set up data segment
    mov ds, ax

    ; Display message to enter the first number
    mov ah, 09h         ; AH=09h to print string
    mov dx, offset message1 ; DS:DX points to the message
    int 21h             ; Call DOS interrupt

    ; Read first number from user
    mov ah, 0Ah         ; AH=0Ah to read string
    mov dx, offset num1 ; DS:DX points to the buffer
    int 21h             ; Call DOS interrupt

    ; Display message to enter the second number
    mov ah, 09h         ; AH=09h to print string
    mov dx, offset message2 ; DS:DX points to the message
    int 21h             ; Call DOS interrupt

    ; Read second number from user
    mov ah, 0Ah         ; AH=0Ah to read string
    mov dx, offset num2 ; DS:DX points to the buffer
    int 21h             ; Call DOS interrupt

    ; Convert strings to numbers
    mov si, offset num1 + 1 ; Point SI to the ASCII digits of the first number
    call ascii_to_num        ; Convert ASCII string to number
    mov bl, al               ; Store the first number in BL

    mov si, offset num2 + 1 ; Point SI to the ASCII digits of the second number
    call ascii_to_num        ; Convert ASCII string to number
    add al, bl               ; Add the first and second numbers

    ; Convert the result back to ASCII string
    mov si, offset result + 5 ; Point SI to the end of the buffer
    mov ah, 0                ; Clear AH to prepare for division
    mov cl, 10               ; Prepare to divide by 10
    div cl                    ; Divide AL by 10
    add dl, '0'              ; Convert the remainder to ASCII
    dec si                    ; Move SI to the next position
    mov [si], dl             ; Store the remainder in the result buffer
    mov al, ah               ; Move the quotient back to AL
    div cl                    ; Divide AL by 10
    add dl, '0'              ; Convert the remainder to ASCII
    dec si                    ; Move SI to the next position
    mov [si], dl             ; Store the remainder in the result buffer
    mov byte ptr [si+1], '$' ; Null-terminate the result string

    ; Display the result message
    mov ah, 09h         ; AH=09h to print string
    mov dx, offset result_message ; DS:DX points to the message
    int 21h             ; Call DOS interrupt

    ; Display the result
    mov ah, 09h         ; AH=09h to print string
    mov dx, offset result ; DS:DX points to the result buffer
    int 21h             ; Call DOS interrupt

    ; Exit program
    mov ah, 4Ch         ; AH=4Ch to terminate program
    int 21h             ; Call DOS interrupt

ascii_to_num:
    xor ax, ax               ; Clear AX
    mov cx, 10               ; Set CX to 10
.next_digit:
    mov dl, [si]             ; Load the next character into DL
    cmp dl, '$'              ; Check for end of string
    je .done                  ; If end of string, we're done
    sub dl, '0'              ; Convert ASCII to number
    mul cx                    ; Multiply AX by 10
    add ax, dx               ; Add DL to AX
    inc si                    ; Move to the next character
    jmp .next_digit          ; Repeat for next digit
.done:
    ret                       ; Return
end main
