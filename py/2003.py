while True:
    try:
        a = input()

        x = int(a[:1])
        y = int(a[2:])

        tempo = (60 * x) + y
        chegada = tempo + 60
        atraso = chegada - 480

        if atraso > 0:
            print(f"Atraso maximo: {atraso}")
        else:
            print("Atraso maximo: 0")

    except EOFError:
        break