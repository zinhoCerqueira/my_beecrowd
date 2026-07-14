confirm = True
totais, totais_g, totais_i, empates = 0, 0, 0, 0

while confirm:
    a, b = map(int, input().split())
    totais = totais + 1

    if a > b :
        totais_i = totais_i + 1
    elif b > a:
        totais_g = totais_g + 1
    else:
        empates = empates + 1

    print("Novo grenal (1-sim 2-nao)")
    x = int(input())
    if x == 2:
        confirm = False
    
print(totais, "grenais")
print("Inter:", totais_i, sep='')
print("Gremio:", totais_g, sep='')
print("Empates:", empates, sep='')

if totais_i > totais_g:
    print("Inter venceu mais")
elif totais_g > totais_i:
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")
