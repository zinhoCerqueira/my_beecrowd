a = int(input())
b = int(input())

if a >= b:
    maior = a
    menor = b
else:
    menor = a
    maior = b

for i in range(menor + 1, maior):
    if i % 5 == 2 or i % 5 == 3:
        print(i)
        
