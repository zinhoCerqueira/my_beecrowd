x = int(input())
z = int(input())

while z < x :
    z = int(input())

start = x
valor = 1
prox = x+1

while z > start:
    start = start + prox
    prox = prox + 1
    valor = valor + 1

print(valor)