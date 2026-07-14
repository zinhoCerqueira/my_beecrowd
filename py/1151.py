a = 0
b = 1

x = int(input())

for i in range(x):

    if i == x-1:
        print(a)
    else:
        print(a, end=' ')


    c = a + b
    a = b
    b = c