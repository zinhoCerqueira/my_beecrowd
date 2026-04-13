while True:
    try:
        a = int(input())
    except EOFError:
        break

    for i in range(a):
        for j in range(a):

            if (i + j) == a - 1:
                print(2, end="")
            elif i == j:
                print(1, end="")
            else:
                print(3, end="")  
        
        print()