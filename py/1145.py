a, b = map(int, input().split())
b = b // a
for i in range(0, b):
    for j in range(1, a + 1):
        if j == a:
            print(j + (a * i))
        else:
            print(j + (a * i), end=' ')