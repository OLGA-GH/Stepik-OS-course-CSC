min:
    movq %RDI, %RAX
    cmpq %RDI, %RSI
    ja break
    movq %RSI, %RAX
    break:
    retq