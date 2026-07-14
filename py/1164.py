z = int(input())

for i in range(z):
    a = int(input())
    soma = 0

    for j in range(1, a):
        if a % j == 0:
            soma = soma + j
    
    if soma == a:
        print(a, "eh perfeito")
    else:
        print(a, "nao eh perfeito")