.model small
.stack 100h
.data
var1 db 'atul$'
var2 db '1'

.code 

main proc
    mov ax,@data ;moving data part into accumulator
    mov ds,ax ;moving ax,which had the data part,to data segment to create a memory heap
    mov dl,var2;
    ;mov ah,2
    int 21h 
    
    lea dx,var1
    mov ah,9
    int 21h
    
    
main endp


end main