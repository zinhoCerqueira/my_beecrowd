
n = int(input()) 
soma = 0

for i in range(n):
    a, b = map(int, input().split())

    if a <= b:
        maior = b
        menor = a
    else:
        maior = a
        menor = b

    for i in range(menor+1, maior):
        if i % 2 != 0:
            soma = soma + i

    print(soma)
    soma = 0