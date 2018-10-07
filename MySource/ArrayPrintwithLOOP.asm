.model small
.stack 100h
.data 
var1 db 1,2,3,4
var2 db 'a','b','c'
.code
main proc
    mov ax,@data
    mov ds,ax 
    
    mov cx,4
    
    mov si,offset var1
    l1:
    mov dx,[si] 
    mov ah,2
    int 21h 
    inc si
    loop l1
main endp

end main