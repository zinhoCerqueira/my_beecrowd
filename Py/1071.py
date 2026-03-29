a = int(input())
b = int(input())
soma = 0

if a >= b:
    maior = a
    menor = b
else: 
    maior = b
    menor = a

for i in range(menor + 1, maior):
    if i % 2 != 0:
        soma = soma + i

print(soma)


