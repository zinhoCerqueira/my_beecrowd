a = int(input())

gasto, verba = 0, 0

for i in range(a):
    
    x, y = map(str, input().split())

    if x == "G":
        gasto = gasto + int(y)
    
    elif x == "V":
        verba = verba + int(y)

if verba >= gasto:
    print("A greve vai parar.")

else:
    print("NAO VAI TER CORTE, VAI TER LUTA!")

    

