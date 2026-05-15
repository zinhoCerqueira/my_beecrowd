a, b, c = map(int, input().split())

if a + b > c and a + c > b and a + c >  b:

    lados = sorted([a, b, c])

    if (lados[0] ** 2) + (lados[1] ** 2) == (lados[2] ** 2):
        ret = True
    else:
        ret = False

    if a == b and a == c and b == c:
        print("Valido-Equilatero")
    
    elif a == b or a == c or b == c:
        print("Valido-Isoceles")
    
    else:
        print("Valido-Escaleno")
    
    if ret:
        print("Retangulo: S")
    else:
        print("Retangulo: N")



else:
    print("Invalido")