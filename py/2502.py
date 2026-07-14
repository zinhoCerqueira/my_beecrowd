while True:
    try:

        c, n = map(str, input().split())

        p1 = input()
        p2 = input()

        trocas = {}

        for x, y in zip(p1, p2):
            trocas[x] = y
            trocas[y] = x

        for _ in range(int(n)):

            frase = input()
            nova = ""
            for letra in frase:

                if letra.upper() in trocas:
                    if letra.isalpha() and letra.isupper(): 
                        nova += trocas[letra].upper()
                    elif letra.isalpha() and letra.islower():
                        nova += trocas[letra.upper()].lower()
                    else:
                        nova += trocas[letra].lower()
                else:
                    nova += letra

            print(nova)
        
        print()

        

    except EOFError:
        break
