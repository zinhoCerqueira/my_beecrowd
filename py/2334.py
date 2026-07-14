while True:

    a = int(input())

    if a == -1:
        exit()
    
    if a - 1 < 0:
        print(0)
    else:
        print(a - 1)
