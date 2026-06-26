n, g = map(int, input().split())

dados = {}

for i in range(n):
    chave, valor = input().split()
    dados[chave] = int(valor)

qtd = int(input())

runas = input().split()

valor = 0
for k in range(qtd):
    valor += dados[runas[k]]

print(valor)

if valor >= g:
    print("You shall pass!")
else:
    print("My precioooous")