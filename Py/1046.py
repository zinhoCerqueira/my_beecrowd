a, b = map(int, input().split())

if a > b:
    x = 24 - a + b

elif b > a:
    x = b - a

else:
    x = 24

print("O JOGO DUROU", x, "HORA(S)" )