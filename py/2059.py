x = list(map(int, input().split()))

resultado = x[1] + x[2]

if x[4] == 1 and x[3] == 1:
    print("Jogador 2 ganha!")

elif x[4] == 1 and x[3] == 0:
    print("Jogador 1 ganha!")

elif x[4] == 0 and x[3] == 1:
    print("Jogador 1 ganha!")

elif resultado % 2 == 0:
    if x[0] == 0:
        print("Jogador 2 ganha!")
    else:
        print("Jogador 1 ganha!")

elif resultado % 2 == 1:
    if x[0] == 0:
        print("Jogador 1 ganha!")
    else:
        print("Jogador 2 ganha!")