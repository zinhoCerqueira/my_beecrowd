A, B, C = map(int, input().split())

if A >= B:
    maior = A
else:
    maior = B

if C >= maior:
    maior = C

print(maior, "eh o maior")
