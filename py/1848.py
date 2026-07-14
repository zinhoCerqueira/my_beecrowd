d = {
    '---': 0,
    '--*': 1,
    '-*-': 2,
    '-**': 3,
    '*--': 4,
    '*-*': 5,
    '**-': 6,
    '***': 7
}

caw_contador = False
contador = 0
soma = 0

while contador < 3:

    linha = input()
    partes = linha.split()

    if len(partes) == 1:
        a = partes[0]
        soma = soma + d[a]
        caw_contador = False

    elif len(partes) == 2:
        caw_contador = True

        if not caw_contador:
            print(0)
            contador = contador + 1
            soma = 0
        else:
            contador = contador + 1
            print(soma)
            soma = 0