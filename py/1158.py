n = int(input())

for i in range(n):
    a, b = map(int, input().split())

    contador = 0
    soma = 0
    while contador < b:
        if a % 2 != 0:
            contador = contador + 1
            soma = soma + a
        a = a + 1
    
    print(soma)