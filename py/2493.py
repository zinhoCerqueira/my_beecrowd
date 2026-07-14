while True:
    try:

        perdedores = []
        express = []

        t = int(input())

        for _ in range(t):
            express.append(input())

        for _ in range(t):
            palpite = input().split()

            r_express = express[int(palpite[1]) - 1]

            x, resto = r_express.split()
            y, z = resto.split("=")

            x = int(x)
            y = int(y)
            z = int(z)

            if palpite[2] == "+":
                if x + y != z:
                    perdedores.append(palpite[0])
            
            elif palpite[2] == "-":
                if x - y != z:
                    perdedores.append(palpite[0])
            
            elif palpite[2] == "*":
                if x * y != z:
                    perdedores.append(palpite[0])
            
            elif palpite[2] == "I":
                if x + y == z or x - y == z or x * y == z:
                    perdedores.append(palpite[0])
            
            
        if len(perdedores) == t:
            print("None Shall Pass!")
        elif len(perdedores) == 0:
            print("You Shall All Pass!")
        else:
            perdedores.sort()
            print(" ".join(perdedores))

    except EOFError:
        break
