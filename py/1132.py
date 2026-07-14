a = int(input())
b = int(input())
s = 0

if a >= b:
    maior = a
    menor = b
else:
    menor = a
    maior = b

for i in range(menor, maior + 1):
    if i % 13 != 0:
        s = s + i

print(s)