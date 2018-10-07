.model small
.stack 100h
.data
.code

main proc
    mov cx,26
    mov dl,65
    L1:  ;no space after decalring label name
    mov ah,2
    int 21h
    
    add dl,1
    
    Loop L1
main endp

end main
