pow:   
    cmpq $0, %RDI
    jz a1   
    cmpq $0, %RSI
    jz a2

    movq %RDI, %RAX

    for:
        decq %RSI
        cmpq $0, %RSI
        jz exit
        imul %RAX, %RDI
        jmp for   
       
a1: movq $0, %RAX
    retq     
a2: movq $1, %RAX
    retq 
    
exit:
movq %RDI, %RAX  
    retq