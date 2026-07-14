n = int(input())
soma = 0

for i in range(n):

    c, p = map(int, input().split())

    soma = soma + (c/p)

if soma > 1:
    print("FAIL")
else:
    print("OK")
