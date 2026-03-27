a, b, c, d = map(int, input().split())

if a > c:
    x = 24 - a + c
    if b > d:
        y = 60 - b + d
        x = x - 1
    elif d > b:
        y = d - b
    else:
        y = 0

elif c > a:
    x = c - a
    if b > d:
        y = 60 - b + d
        x = x - 1
    elif d > b:
        y = d - b
    else:
        y = 0


else:
    if b > d:
        y = 60 - b + d
        x = 23
    elif d > b:
        y = d - b
        x = 0
    else:
        y = 0
        x = 24

print("O JOGO DUROU", x, "HORA(S) E", y, "MINUTO(S)" )