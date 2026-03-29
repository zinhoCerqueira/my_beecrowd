par, impar, posi, nega = 0, 0 , 0, 0

for i in range (5):
    a = int(input())

    if a % 2 == 0:
        par = par + 1
    else:
        impar = impar + 1

    if a > 0:
        posi = posi + 1
    elif a < 0:
        nega = nega + 1

print(par, "valor(es) par(es)")
print(impar, "valor(es) impar(es)")
print(posi, "valor(es) positivo(s)")
print(nega, "valor(es) negativo(s)")

