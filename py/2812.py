n = int(input())

for i in range(n):
    
    a = int(input())
    lista = list(map(int, input().split()))
    lista_impar = []

    for j in range(a):
        if lista[j] % 2 != 0:
            lista_impar.append(lista[j])

    lista_impar.sort()

    inicio = 0
    fim = len(lista_impar) - 1

    resposta = []

    while inicio <= fim:
        if inicio == fim:
            resposta.append(lista_impar[inicio])
        else:
            resposta.append(lista_impar[fim])     
            resposta.append(lista_impar[inicio])  

        inicio += 1
        fim -= 1

    print(*resposta)
        
