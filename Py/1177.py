a = int(input())
contador = 0

for i in range(1000):
    print(f"N[{i}] = {contador}")
    
    if contador < a - 1:
        contador = contador + 1
    else:
        contador = 0