total = 0
i = 0
confirm = True
valid = -1

while confirm:

    while i < 2:

        n = float(input())

        if n >= 0 and n <= 10:
            total = total + n
            i = i + 1

        else:
            print("nota invalida")

    print("media =", f"{(total/2):.2f}")
    
    test = True
    while test:
        print("novo calculo (1-sim 2-nao)")
        valid = int(input())

        if valid == 1 or valid == 2:
            test = False

            if valid == 1:
                i = 0
                total = 0
            else:
                confirm = False
    
