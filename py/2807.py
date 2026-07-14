n = int(input())

lista = [1, 1]
pos1 = 0
pos2 = 1

if n == 1:
    print(1)

else:

    for i in range(n - 2):

        iccanobif_i = lista[pos1] + lista[pos2]

        lista.append(iccanobif_i)

        pos1 += 1
        pos2 += 1 

    print(*lista[::-1])