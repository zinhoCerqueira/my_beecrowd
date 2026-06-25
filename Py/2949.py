qtd = int(input())

anoes, elfos, humanos, magos, hobbits = 0, 0, 0, 0, 0

for i in range(qtd):

    nome, tipo = map(str, input().split())

    if tipo == "A":
        anoes += 1
    elif tipo == "E":
        elfos += 1
    elif tipo == "H":
        humanos += 1
    elif tipo == "M":
        magos += 1
    elif tipo == "X":
        hobbits += 1

print(hobbits, "Hobbit(s)")
print(humanos, "Humano(s)")
print(elfos, "Elfo(s)")
print(anoes, "Anao(oes)")
print(magos, "Mago(s)")
