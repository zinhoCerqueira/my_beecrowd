k = int(input())

a = 1
b = 1

while True:
    c = a + b

    quantidade = c - b - 1

    if k <= quantidade:
        print(b + k)
        break

    k -= quantidade

    a = b
    b = c