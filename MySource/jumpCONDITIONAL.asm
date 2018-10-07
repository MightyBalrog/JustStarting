.model small
.stack 100h
.data

.code

main proc  
    L1:
    mov ah,1
    int 21h
    
    mov dl,3
    
    cmp dl,al
    
    jmp L1
main endp

end main