quantidade = 1

n = int(input())
lista = list(map(int, input().split()))

if n == 1 or n == 2:
    print(1)

else:
    gap = abs(lista[0] - lista[1]) 
    
    for i in range(n - 1):

        if (abs(lista[i] - lista[i + 1])) != gap:
            quantidade += 1
            gap = abs(lista[i] - lista[i + 1])

    print(quantidade)

