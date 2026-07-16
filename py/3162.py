import math

qtd = int(input())

naves = []
menor_distance = []

for _ in range(qtd):
    nave = list(map(int, input().split()))
    naves.append(nave)

for i in range(qtd):
    menor_dist_atual = 999999999

    for j in range(qtd):

        if i == j:
            continue
        
        dist = math.sqrt(
            (naves[i][0] - naves[j][0])**2 + 
            (naves[i][1] - naves[j][1])**2 + 
            (naves[i][2] - naves[j][2])**2
        )

        if dist < menor_dist_atual:
            menor_dist_atual = dist

    menor_distance.append(menor_dist_atual) 

for i in range(qtd):

    if menor_distance[i] <= 20:
        print("A")

    elif menor_distance[i] > 20 and menor_distance[i] <= 50:
        print("M")

    else:
        print("B") 