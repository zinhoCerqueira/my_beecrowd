a = -1

while a != 0:
    a = int(input())

    if a == 0:
        break

    if a == 1:
        print(f"{1:3}")
    
    elif a == 2:
        print(f"{1:3} {1:3}")
        print(f"{1:3} {1:3}")
    else:
        for i in range(a):
            for j in range(a):

                x1 = (a - 1) - i
                x2 = i 

                y1 = (a - 1) - j
                y2 = j

                if x1 <= x2:
                    menor_x = x1
                else:
                    menor_x = x2

                if y1 <= y2:
                    menor_y = y1
                else:
                    menor_y = y2

                if menor_x <= menor_y:
                    menor = menor_x
                else:
                    menor = menor_y

                if j == 0:
                    print(f"{menor + 1:3}", end='')
                else:
                    print(f" {menor + 1:3}", end='')

            print()
    
    print()