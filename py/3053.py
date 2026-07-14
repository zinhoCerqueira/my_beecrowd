movimentos = int(input())
posicao = input()

copos = ['A', 'B', 'C']

indice = copos.index(posicao)
resp = copos[indice]

for i in range(movimentos):

    swap = int(input())

    if swap == 1:
        copos[0], copos[1] = copos[1], copos[0]

    elif swap == 2:
        copos[1], copos[2] = copos[2], copos[1]
    
    else:
        copos[2], copos[0] = copos[0], copos[2]
    
    #print(copos)

if copos.index(resp) == 0:
    print("A")

elif copos.index(resp) == 1:
    print("B")

else:
    print("C")