maior = -1
posicao = -1

for i in range (100):
    a = int(input())

    if maior < a:
        maior = a
        posicao = i

print(maior)
print(posicao + 1)