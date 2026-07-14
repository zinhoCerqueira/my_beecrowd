a, b = map(int, input().split())


while a != 0 and b != 0:

    x = b - a

    for i in range(2):

        if x == 0:
            x = -1

        elif x >= 100:
            x = x - 100
        
        elif x >= 50:
            x = x - 50

        elif x >= 20:
            x = x - 20

        elif x >= 10:
            x = x - 10

        elif x >= 5:
            x = x - 5

        elif x >= 2:
            x = x - 2
    
    if x == 0:
        print("possible")
    else:
        print("impossible")
    
    a, b = map(int, input().split())
