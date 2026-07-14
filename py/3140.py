copiar = False
texto_copiado = ""

while True:
    try:


        linha = input()

        if linha.strip() == "<body>":
            copiar = True
            continue

        if linha.strip() == "</body>":
            copiar = False

        if copiar:
            print(linha)


    except EOFError:
        break