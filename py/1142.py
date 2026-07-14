a = int(input())
c = 1
i = 1

for i in range(a):
    for j in range(3):
        if c % 4 != 0:
            print(c, end=' ')
            c = c + 1
    c = c + 1
    print("PUM")
