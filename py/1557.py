while True:
    valor = int(input())

    if valor == 0:
        break

    if valor == 1:
        print("1")
        print()
        continue

    if valor == 2:
        print("1 2")
        print("2 4")
        print()
        continue

    init = 1

    for i in range(valor):
        vl = init
        for j in range(valor):
            print(f"{vl:4}", end="")
            vl *= 2
        print()
        init *= 2

    print()