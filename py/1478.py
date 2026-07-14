a = -1

invert = False
valor_inicial = 1

while a != 0:
    a = int(input())

    if a == 0:
        break

    for i in range(a):
        contador = valor_inicial
        for j in range(a):

            if contador == 1:
                invert = True
            
            print(contador, end="")
            
            if invert:
                contador = contador + 1
            else:
                contador = contador - 1    
            
        valor_inicial = valor_inicial + 1
        invert = False
        
        print()
    
    invert = False
    valor_inicial = 1
    
    print()