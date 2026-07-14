import math

while True:
    try:
        h, m = map(int, input().split())
        lista = list(map(float, input().split()))
        
        media = sum(lista) / len(lista)
        soma = sum((x - media) ** 2 for x in lista)


        numeador = soma
        denominador = len(lista) - 1
        
        
        r = math.sqrt(soma / denominador)
        print(f"{r:.5f}")
        

    except EOFError:
        break