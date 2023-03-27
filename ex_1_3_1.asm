swap:
    pushq (%RDI)
    pushq (%RSI)

    popq (%RDI)
    popq (%RSI)
    retq