valores = list(map(int, input().split()))

a = valores[0]

for n in valores[1:]:
    if n > 0:
        break

soma = 0
for i in range(n):
    soma += a + i

print(soma)