n = int(input())

nota_carlos = int(input())

for i in range(n - 1):

    nota = int(input())

    if nota > nota_carlos:
        print("N")
        exit()

print("S")
