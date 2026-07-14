a, b, c = map(float, input().split())

if a <= b and a <= c:
    primeiro = a
    if b < c:
        segundo = b
        terceiro = c
    else:
        segundo = c
        terceiro = b

if b <= a and b <= c:
    primeiro = b
    if a < c:
        segundo = a
        terceiro = c
    else:
        segundo = c
        terceiro = a

if c <= b and c <= a:
    primeiro = c
    if a < b:
        segundo = a
        terceiro = b
    else:
        segundo = b
        terceiro = a

if terceiro >= segundo + primeiro:
    print("NAO FORMA TRIANGULO")
    exit()

if (terceiro*terceiro) == (segundo*segundo) + (primeiro*primeiro):
    print("TRIANGULO RETANGULO")

if (terceiro*terceiro) > (segundo*segundo) + (primeiro*primeiro):
    print("TRIANGULO OBTUSANGULO")

if (terceiro*terceiro) < (segundo*segundo) + (primeiro*primeiro):
    print("TRIANGULO ACUTANGULO")

if terceiro == segundo == primeiro:
    print("TRIANGULO EQUILATERO")

if (terceiro == segundo and terceiro != primeiro) or (segundo == primeiro and segundo != terceiro) or (primeiro == terceiro and primeiro != segundo):
    print("TRIANGULO ISOSCELES")
