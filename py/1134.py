a = True

alco, gaso, die = 0, 0, 0

while a:
    a = int(input())

    if a == 1:
        alco = alco + 1
    elif a == 2:
        gaso = gaso + 1
    elif a == 3:
        die = die + 1
    elif a == 4:
        a = False


print("MUITO OBRIGADO")
print("Alcool:", alco)
print("Gasolina:", gaso)
print("Diesel:", die)
