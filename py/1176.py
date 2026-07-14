a = int(input())

for i in range(a):
    b = int(input())
    x,y = 0, 1

    if b == x:
        print(f"Fib({x}) = {x}")
    elif b == y:
        print(f"Fib({y}) = {y}")
    else:
        for i in range(b - 1):
            z = x + y
            x = y
            y = z
        
        print(f"Fib({b}) = {z}")