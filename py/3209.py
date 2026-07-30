n = int(input())

for i in range(n):

    reguas = list(map(int, input().split()))
    somatorio = sum(reguas[1:])

    print(somatorio - reguas[0] + 1)
