a = int(input())
x = list(map(int, input().split()))

dois, tres, quatro, cinco = 0, 0, 0, 0

for i in range(len(x)):

    if x[i] % 2 == 0:
        dois = dois + 1
    
    if x[i] % 3 == 0:
        tres = tres + 1

    if x[i] % 4 == 0:
        quatro = quatro + 1

    if x[i] % 5 == 0:
        cinco = cinco + 1

print(dois, "Multiplo(s) de 2")
print(tres, "Multiplo(s) de 3")
print(quatro, "Multiplo(s) de 4")
print(cinco, "Multiplo(s) de 5")