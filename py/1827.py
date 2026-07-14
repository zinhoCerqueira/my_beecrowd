while True:
    try:
        a = int(input())
    except EOFError:
        break
    
    meio = (a - 1) // 2

    for i in range(a):
        for j in range(a):


            i1 = (a - 1) - i
            i2 = i - 0

            if i1 <= i2:
                i_menor = i1
            else:
                i_menor = i2

            j1 = (a - 1) - j
            j2 = j - 0

            if j1 <= j2:
                j_menor = j1
            else:
                j_menor = j2

            if i_menor <= j_menor:
                menor = i_menor
            else:
                menor = j_menor

            if i == meio and j == meio:
                print(4, end="")
            elif (menor + 1) > ((a - 1) // 3):
                print(1, end="")
            elif i == j:
                print(2, end="")
            elif i + j == (a - 1):
                print(3, end="")
            else:
                print(0, end="")

        print()