def quebra(formula):
    tokens = []
    i = 0

    while i < len(formula):

        # Ignora coeficientes no início ou entre fórmulas
        while i < len(formula) and formula[i].isdigit():
            i += 1

        if i >= len(formula):
            break

        token = formula[i]
        i += 1

        # Letra minúscula opcional
        if i < len(formula) and formula[i].islower():
            token += formula[i]
            i += 1

        # Número opcional
        while i < len(formula) and formula[i].isdigit():
            token += formula[i]
            i += 1

        tokens.append(token)

    return tokens


def contem(substancia, perigosa):
    m = len(perigosa)

    for i in range(len(substancia) - m + 1):
        if substancia[i:i + m] == perigosa:
            return True

    return False


n = int(input())

for caso in range(n):

    t = int(input())

    perigosas = []

    for _ in range(t):
        perigosas.append(quebra(input()))

    qtd_testes = int(input())

    for _ in range(qtd_testes):

        substancia = quebra(input())

        abortar = False

        for perigosa in perigosas:
            if contem(substancia, perigosa):
                abortar = True
                break

        if abortar:
            print("Abortar")
        else:
            print("Prossiga")

    if caso != n - 1:
        print()