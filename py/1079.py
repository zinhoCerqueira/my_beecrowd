a = int(input())

for i in range (a):
    b, c, d = map(float, input().split())

    m = ((b * 2) + (c * 3) + (d * 5)) / (10)

    print(f"{m:.1f}")
