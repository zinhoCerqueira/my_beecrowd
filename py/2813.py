n = int(input())

guarda_casa = 0
guarda_escritorio = 0

comprados_casa = 0
comprados_escritorio = 0

for i in range(n):

    ida, volta = input().split()

    # Ida para o trabalho
    if ida == "chuva":

        if guarda_casa == 0:
            comprados_casa += 1
        else:
            guarda_casa -= 1

        guarda_escritorio += 1

    # Volta para casa
    if volta == "chuva":

        if guarda_escritorio == 0:
            comprados_escritorio += 1
        else:
            guarda_escritorio -= 1

        guarda_casa += 1

print(comprados_casa, comprados_escritorio)