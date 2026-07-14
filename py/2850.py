import math

while True:
    try:
        a = input()

        if a == "esquerda":
            print("ingles")

        elif a == "direita":
            print("frances")

        elif a == "nenhuma":
            print("portugues")

        else:
            print("caiu")
        

    except EOFError:
        break