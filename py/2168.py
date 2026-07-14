a = int(input())

matriz = []

for i in range(a + 1):
    linha = list(map(int, input().split()))
    matriz.append(linha)

for i in range(a):
    for j in range(a):

        contador = 0

        if matriz[i][j] == 1:
            contador += 1
        
        if matriz[i][j + 1] == 1:
            contador += 1
            
        if matriz[i + 1][j] == 1:
            contador += 1

        if matriz[i + 1][j + 1] == 1:
            contador += 1

        if contador >= 2:
            print("S", end="")
        else:
            print("U", end="")
    
    print()