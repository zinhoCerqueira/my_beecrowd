import math

while True:
    try:
        menor = 999999

        qtd = int(input())

        for i in range(qtd):

            a = float(input())

            if a < menor:
                menor = a
        
        print(menor)
            
        

        

    except EOFError:
        break