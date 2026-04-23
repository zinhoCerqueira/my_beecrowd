a = int(input())
linha = input()
partes = linha.split()

menor = 9999
index_final = 0

for index, i in enumerate(partes):
    if menor > int(i):
        index_final = index
        menor = int(i)

print(index_final + 1)