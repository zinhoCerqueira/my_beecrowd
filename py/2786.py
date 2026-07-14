l = int(input())
c = int(input())

tipo1 = 0
tipo2 = ((l - 1) * 2) + ((c - 1) * 2)

for i in range(c):
    if i != c - 1:
        tipo1 = tipo1 + l + l-1
    else:
        tipo1 = tipo1 + l  

print(tipo1)
print(tipo2)