.model small
.stack 100h
.data
var1 db 100 dup('$')
.code

main proc
    mov ax,@data
    mov ds,ax
    
    mov si,offset var1 ;ye hamesa likhna hoga,if using array
    l2:
    mov ah,1
    int 21h
    cmp al,13  ;ascii value of enter is 13
    
    je l1 ;jump to l1 is al value is equal to 13,(enter)
    
    mov [si],al ;si mein move karayenge al,mtlb ah,1 ka input
    
    inc si ;si increment krte rhega                                                   
    jmp l2 ;wapis l2 k paas jayega input lene k liye jabtak useer
           ;enter nhi daba deta
    
    l1:
    mov dx,offset var1
     ;offset hamesa likhenge if dealing with string or array
    mov ah,9  ;ah,2 hi use karenge array print krne k liye
    int 21h
main endp

end main