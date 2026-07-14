a = int(input())

linha = list(map(int, input().split()))

for i in range (1 ,len(linha)):

    if linha[i] < linha[i - 1]:
        print(i + 1)
        exit()

print(0)
