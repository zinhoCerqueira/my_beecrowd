a = int(input())

while a != 0:

    for i in range(a):
        
        b = int(input())

        if b == 2:
            pontas = 2
            lados = 0
        else:
            pontas = 2
            lados = b - pontas
        
        if lados % 2 != 0:
            lados = lados + 1
            pontas = pontas - 1

        resp = pontas + (lados * 2)
        print(resp)

    a = int(input())
