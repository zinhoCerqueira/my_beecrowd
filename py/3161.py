n, m = map(int, input().split())


lista_frutas = []
for _ in range(n):
    lista_frutas.append(input())

lista_cifras = []
for _ in range(m):
    lista_cifras.append(input())

for fruta in lista_frutas:
    fruta_low = fruta.lower()
    fruta_inv = fruta_low[::-1]
    achou = False

    for cifra in lista_cifras:
        cifra_low = cifra.lower()
        
        if fruta_low in cifra_low or fruta_inv in cifra_low:
            achou = True
            break
            
    if achou:
        print(f"Sheldon come a fruta {fruta_low}")
    else:
        print(f"Sheldon detesta a fruta {fruta_low}")