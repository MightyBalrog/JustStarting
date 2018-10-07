.model small
.stack
.data

.code

   main proc
     mov ah,1
     int 21h    ;only used for output or input everyutime and 
                 ;also after mov ah,4ch
     mov dl,al
     mov ah,2
     int 21h
     mov ah,4ch
     int 21h


   main endp
end main