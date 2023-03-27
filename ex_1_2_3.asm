subq $32, %RSI
movq $5, %R8
movq %RSI, %RAX
mulq %R8
movq $9, %R8
divq %R8
movq %RAX, %RSI