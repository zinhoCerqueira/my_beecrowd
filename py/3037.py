qtd = int(input())


for _ in range(qtd):

    maria, joao = 0, 0
    
    for _ in range(3):
        x, d = map(int, input().split())
        joao = joao + (x * d)

    for _ in range(3):
        x, d = map(int, input().split())
        maria = maria + (x * d)
    
    if joao > maria:
        print("JOAO")
    
    else:
        print("MARIA")