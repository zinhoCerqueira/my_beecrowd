meses = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25]

caso = 1
while True:
    try:
        a, b = map(int, input().split())

        if a == 12 and b == 25:
            print("E natal!")
        
        elif a == 12 and b == 24:
            print("E vespera de natal!")

        elif a == 12 and b > 24:
            print("Ja passou!")
        
        else:
            z = 0
            for i in range(a - 1, len(meses)):
                if i == a - 1:
                    z = z + meses[i] - b
                elif i == 11:
                    z = z + 25
                else:
                    z = z + meses[i]
            
            print("Faltam", z, "dias para o natal!")

    except EOFError:
        break