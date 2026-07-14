n = int(input())

total = 0
coelho = 0
rato = 0
sapo = 0

for i in range(n):
    num, let = input().split()
    num = int(num)

    total = total + num

    if let == "C":
        coelho = coelho + num
    elif let == "R":
        rato = rato + num
    elif let == "S":
        sapo = sapo + num

print("Total:", total, "cobaias")
print("Total de coelhos:", coelho)
print("Total de ratos:", rato)
print("Total de sapos:", sapo)
print("Percentual de coelhos:", f"{(coelho/total)*100:.2f}", "%")
print("Percentual de ratos:", f"{(rato/total)*100:.2f}", "%")
print("Percentual de sapos:", f"{(sapo/total)*100:.2f}", "%")


