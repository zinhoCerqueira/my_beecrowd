letra = input()

linha = []
matriz = []

soma, cont = 0, 0

for i in range(12):
    for j in range(12):
        linha.append(float(input()))
    matriz.append(linha[:])
    linha.clear()

for i in range(12):
    for j in range(12):
        if (i > 6) and (j < i) and (i + j) > 11:
            soma = soma + matriz[i][j]
            cont = cont + 1

if letra == 'S':
    print(f"{(soma):.1f}")
else:
    print(f"{(soma / cont):.1f}")