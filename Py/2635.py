a = int(input())
hist = []

for _ in range(a):
    
    palavra = input()
    hist.append(palavra) 

b = int(input())

for _ in range(b):

    palavra = input()

    numero = 0
    tamanho_maior = 0
    for i in range(a):

        if hist[i].startswith(palavra):
            numero += 1

            if len(hist[i]) > tamanho_maior:
                tamanho_maior = len(hist[i])
    
    if (tamanho_maior == 0):
        print(-1)
    else:
        print(numero, tamanho_maior)
