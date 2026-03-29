a = int(input())

for i in range (a):

    par = False
    posi = False
    zero = False

    b = int(input())
    if b == 0:
        zero = True
    elif b % 2 == 0:
        par = True

    if b > 0:
        posi = True
    
    if zero:
        print("NULL")
    elif par and posi:
        print("EVEN POSITIVE")
    elif par and not posi:
        print("EVEN NEGATIVE")
    elif not par and posi:
        print("ODD POSITIVE")
    else:
        print("ODD NEGATIVE")