a = int(input())
total = 0

for i in range(a):
    x, y = map(int, input().split())

    if x == 1001:
        total = total + (y * 1.50)
    elif x == 1002:
        total = total + (y * 2.50)
    elif x == 1003:
        total = total + (y * 3.50)
    elif x == 1004:
        total = total + (y * 4.50)
    elif x == 1005:
        total = total + (y * 5.50)

print(f"{total:.2f}")