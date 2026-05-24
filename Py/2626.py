while True:
    try:
        dodo, leo, peper = input().split()

        jogadas = [dodo, leo, peper]

        # todos iguais ou todos diferentes
        if len(set(jogadas)) != 2:
            print("Putz vei, o Leo ta demorando muito pra jogar...")
            continue

        # quem venceu?
        if jogadas.count("pedra") == 1 and jogadas.count("tesoura") == 2:
            vencedor = "pedra"

        elif jogadas.count("tesoura") == 1 and jogadas.count("papel") == 2:
            vencedor = "tesoura"

        elif jogadas.count("papel") == 1 and jogadas.count("pedra") == 2:
            vencedor = "papel"

        else:
            print("Putz vei, o Leo ta demorando muito pra jogar...")
            continue

        if dodo == vencedor:
            print("Os atributos dos monstros vao ser inteligencia, sabedoria...")

        elif leo == vencedor:
            print("Iron Maiden's gonna get you, no matter how far!")

        else:
            print("Urano perdeu algo muito precioso...")

    except EOFError:
        break