while True:
    try:
        x, y, m = map(int, input().split())

        for i in range(m):
            a, b = map(int, input().split())

            if (a <= x or a <= y) and (b <= x or b <= y):
                print("Sim")
            else:
                print("Nao") 

    except EOFError:
        break