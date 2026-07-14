x = int(input())


for _ in range(x):

    nome = input()
    gd = float(input())
    lista = list(map(float, input().split()))

    resp = sum(lista) - min(lista) - max(lista)
    
    print(nome, f"{resp*gd:.2f}")