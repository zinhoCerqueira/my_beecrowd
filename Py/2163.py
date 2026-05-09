n, m = map(int, input().split())

jedi = False
matriz = []

for i in range(n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

for i in range(1, n - 1):
    for j in range(1, m - 1):

        if matriz[i][j] == 42:

            if matriz[i - 1][j] == 7 and matriz[i - 1][j - 1] == 7 and matriz[i][j - 1] == 7 and matriz[i + 1][j -1] == 7 and matriz[i + 1][j] == 7 and matriz[i + 1][j + 1] == 7 and matriz[i][j + 1] == 7 and matriz[i - 1][j + 1] == 7:
                print(i + 1, j + 1)
                exit()
    

print("0 0")