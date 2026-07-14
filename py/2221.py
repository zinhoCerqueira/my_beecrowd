import math

while True:
    try:

        instancia = int(input())

        for i in range(instancia):

            bonus = int(input())

            jogador1 = list(map(int, input().split()))
            jogador2 = list(map(int, input().split()))

            score1 = ((jogador1[0] + jogador1[1]) / 2 )
            score2 = ((jogador2[0] + jogador2[1]) / 2 )

            if jogador1[2] % 2 == 0:
                score1 = score1 + bonus
            
            if jogador2[2] % 2 == 0:
                score2 = score2 + bonus

            if score1 > score2:
                print("Dabriel")
            elif score2 > score1:
                print("Guarte")
            else:
                print("Empate")


    except EOFError:
        break
