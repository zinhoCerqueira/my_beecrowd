n = int(input())
k = int(input())

l = []

for _ in range(n):
    l.append(int(input()))

l.sort(reverse=True)

nota_corte = l[k - 1]

contador = 0

for nota in l:
    if nota >= nota_corte:
        contador += 1

print(contador)