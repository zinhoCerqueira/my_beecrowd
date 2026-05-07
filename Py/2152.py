a = int(input())

for _ in range(a):
    
    a, b, c = input().split()
    
    if len(a) == 2:
        hora = a
    else:
        hora = "0" + a

    hora = hora + ":"

    if len(b) == 2:
        hora = hora + b
    else:
        hora = hora + "0" + b

    if c == "1":
        hora = hora + " - A porta abriu!"
    else:
        hora = hora + " - A porta fechou!"

    print(hora)