a = int(input())

for i in range(a):

    partes = input().split()
    num = input().split()

    soma  = int(num[0]) + int(num[1])
    
    if soma % 2 == 0:
        result = True
    else:
        result = False

    if partes[1] == "PAR": 
        if result:
            print(partes[0])
        else:
            print(partes[2])
    
    elif partes[1] == "IMPAR": 
        if not result:
            print(partes[0])
        else:
            print(partes[2])
    
