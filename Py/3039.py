qtd = int(input())

carrinho, boneca = 0, 0
for _ in range(qtd):

    x, d = map(str, input().split())

    if d == "F":
        boneca += 1
    
    else:
        carrinho += 1

print(carrinho, "carrinhos")
print(boneca, "bonecas")
