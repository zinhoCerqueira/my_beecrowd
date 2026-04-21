import math

a, b = map(int, input().split())
r = b
contador = 0

if a > 0 and b > 0:
    print(a // b, a % b)

elif a < 0 and b < 0:
    while True:
        r = a - (contador * b)

        if r > 0 and r < abs(b):
            break

        contador = contador + 1
    

    print(contador, r)

else:
    
    while True:
        r = a + (contador * b)

        if r > 0 and r < abs(b):
            break

        contador = contador + 1
    

    print(-contador, r)
