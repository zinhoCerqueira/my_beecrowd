n = int(input())

for i in range(n):
    m, n = map(int, input().split())

    if n == 0:
        print("divisao impossivel")
    else:
        print(f"{m/n:.1f}")