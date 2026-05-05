contador = 1
caso = 1

while True:
    lista = [0]
    try:
        a = int(input())

        if a == 0:
            print(f"Caso {caso}: {len(lista)} numero")
            print(*lista)
        
        else:
            for i in range(a):
                for j in range(a):
                    if j >= contador:
                        break 

                    lista.append(contador)
                
                contador = contador + 1
            
            print(f"Caso {caso}: {len(lista)} numeros")
            print(*lista)
            lista.clear()
            contador = 0
        
        caso = caso + 1


    except EOFError:
        break