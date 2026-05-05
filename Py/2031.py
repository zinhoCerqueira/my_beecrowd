a = int(input())

for i in range(a):
    x = input()
    y = input()

    if x == "ataque":

        if y == "pedra":
            print("Jogador 1 venceu")
        elif y == "ataque":
            print("Aniquilacao mutua")
        elif y == "papel":
            print("Jogador 1 venceu")

    
    elif x == "pedra":
        
        if y == "pedra":
            print("Sem ganhador")
        elif y == "ataque":
            print("Jogador 2 venceu")
        elif y == "papel":
            print("Jogador 1 venceu")
    
    elif x == "papel":

        if y == "pedra":
            print("Jogador 2 venceu")
        elif y == "ataque":
            print("Jogador 2 venceu")
        elif y == "papel":
            print("Ambos venceram")
