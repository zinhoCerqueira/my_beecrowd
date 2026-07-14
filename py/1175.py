lista = []

for i in range(20):
    lista.append(int(input()))

for i in range(20):
    print(f"N[{i}] = {lista[19-i]}")