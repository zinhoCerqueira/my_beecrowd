a1 = int(input())
a2 = int(input())
a3 = int(input())

# Máquina no 1º andar
t1 = (a2 * 2) + (a3 * 4)

# Máquina no 2º andar
t2 = (a1 * 2) + (a3 * 2)

# Máquina no 3º andar
t3 = (a1 * 4) + (a2 * 2)

print(min(t1, t2, t3))