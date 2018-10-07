.model small
.stack 
.data
.code 

main proc
    mov dl,'a'
    mov ah,2
    int 21h
    mov ah,4ch
    
main endp

end main