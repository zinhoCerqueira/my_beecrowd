alimento = {
    "suco" : 120,
    "morango" : 85,
    "mamao" : 85,
    "goiaba" : 70,
    "manga" : 56,
    "laranja" : 50,
    "brocolis" : 34
}

while True:

    x = int(input())

    if x == 0:
        exit()

    vit_c = 0
    for i in range(x):

        lista = list(map(str, input().split()))

        vit_c = vit_c + (int(lista[0]) * alimento[lista[1]])

    if vit_c > 130:
        print("Menos", vit_c - 130, "mg")
    elif vit_c < 110:
        print("Mais", 110 - vit_c, "mg")
    else:
        print(vit_c, "mg")


