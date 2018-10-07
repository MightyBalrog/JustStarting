.model
.stack 100h
.data 
.code

main proc
    mov bl,2  ;register addressing mode        
    mov cl,5  ;for immediate addressing mode mov dl,2
    add bl,cl                               ;add dl,5
    add bl,48
    
    mov dl,bl
    mov ah,2
    int 21h
    mov ah,4ch
    int 21h

main endp


end main