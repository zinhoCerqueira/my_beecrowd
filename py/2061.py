x = list(map(int, input().split()))

for i in range(x[1]):
    a = input()

    if a == "fechou":
        x[0] = x[0] + 1
    else:
        x[0] = x[0] - 1

print(x[0])