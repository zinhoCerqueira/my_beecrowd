a = int(input())

for i in range (a):
    if (i + 1) % 2 == 0:
        x = (i + 1) * (i + 1)
        print(f"{i+1}^2 =", x)