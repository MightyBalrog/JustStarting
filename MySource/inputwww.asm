.model small
.stack
.data 
.code

main proc
    mov ah,1 //our input goes to AL and not ah
    int 21h
    mov dl,al 
    mov ah,2
    int 21h
    mov ah,4ch
    int 21h
    
    
main endp

end main