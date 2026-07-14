cont = 1

while True:
    qtd = int(input())

    if qtd == 0:
        break

    expr = input()

    resultado = 0
    numero = ""
    operador = "+"

    for c in expr:
        if c.isdigit():
            numero += c
        else:
            if operador == "+":
                resultado += int(numero)
            else:
                resultado -= int(numero)

            operador = c
            numero = ""

    # Processa o último número
    if operador == "+":
        resultado += int(numero)
    else:
        resultado -= int(numero)

    print(f"Teste {cont}")
    print(resultado)
    print()

    cont += 1