.model small
.stack
.data
var1 db 'atul you$'
var2 db 'are great$'
.code   

main proc
    mov ax,@data
    mov ds,ax
    
    lea dx,var1  ;we use lea for string input not mov
    mov ah,9 ;string k liye 9
    int 21h
    
    mov dx,10   ;new line ascii value is 10
    mov ah,2
    int 21h
    
    mov dx,13    ;carriage return ascii value is 13
    mov ah,2
    int 21h
    
    lea dx,var2
    mov ah,9
    int 21h
main endp

end main