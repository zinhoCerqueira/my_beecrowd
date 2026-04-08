z = int(input())
x = True

for i in range(z):
    a = int(input())

    for j in range(2, a):
        if a % j == 0:
            x = False
            break
    
    if not x:
        print(a, "nao eh primo")
    else:
        print(a, "eh primo")
    
    x = True