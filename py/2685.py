while True:
    try:
        a = int(input())

        if 0 <= a <= 89:
            print("Bom Dia!!")

        elif 90 <= a <= 179:
            print("Boa Tarde!!")

        elif 180 <= a <= 269:
            print("Boa Noite!!")

        elif 270 <= a <= 359:
            print("De Madrugada!!")

        else:
            print("Bom Dia!!")
            

    except EOFError:
        break
