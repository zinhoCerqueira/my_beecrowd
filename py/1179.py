par, impar = [], []

for i in range(15):
    a = int(input())

    if a % 2 == 0:
        par.append(a)
    else:
        impar.append(a)

    if len(par) == 5:
        for j, valor in enumerate(par):
            print(f"par[{j}] = {valor}")
        par.clear()
    
    if len(impar) == 5:
        for j, valor in enumerate(impar):
            print(f"impar[{j}] = {valor}")
        impar.clear()

    if i == 14:
        
        for j, valor in enumerate(impar):
            print(f"impar[{j}] = {valor}")

        for j, valor in enumerate(par):
            print(f"par[{j}] = {valor}")
