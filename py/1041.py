a, b = map(float, input().split())

if a == b == 0:
    print("Origem")
    exit()
elif a == 0:
    print("Eixo Y")
    exit()
elif b == 0:
    print("Eixo X")
    exit()

if a > 0 and b > 0:
    print("Q1")
elif a > 0 and b < 0:
    print("Q4")
elif a < 0 and b > 0:
    print("Q2")
else:
    print("Q3")