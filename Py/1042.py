a, b, c = map(int, input().split())

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

print(primeiro)
print(segundo)
print(terceiro)
print()
print(a)
print(b)
print(c)