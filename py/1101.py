m, n = 1, 1
soma = 0

while m > 0 and n > 0:
    m, n = map(int, input().split())
    if m <= 0 or n <= 0:
        exit()

    if m <= n:
        maior = n
        menor = m
    else:
        maior = m
        menor = n

    for i in range(menor, maior + 1):
        print(i, end=' ')
        soma = soma + i
    
    print("Sum=" + str(soma))
    soma = 0

3