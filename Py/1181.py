numero = int(input())
letra = input()

linha = []
matriz = []

soma = 0

for i in range(12):
    for j in range(12):
        linha.append(float(input()))
    matriz.append(linha[:])
    linha.clear()

for i in range(12):
    soma = soma + matriz[numero][i]

if letra == 'S':
    print(f"{(soma):.1f}")
else:
    print(f"{(soma / 12):.1f}")