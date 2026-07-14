a = int(input())
c1, c2 = 0, 0

for i in range(a):
    b = int(input())
    if (b >= 10) and (b <= 20):
        c1 = c1 + 1
    else:
        c2 = c2 + 1

print(c1, "in")
print(c2, "out")