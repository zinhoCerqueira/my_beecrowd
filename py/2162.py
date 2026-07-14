a = int(input())
x = list(map(int, input().split()))

anterior = x[0]

if a == 2 and x[0] == x[1]:
    print(0)

elif a == 2 and x[0] != x[1]:
    print(1)

else:

    for i in range(1 ,a - 1):

        if x[i - 1] >= x[i] and x[i + 1] <= x[i]:
            print(0)
            exit()
        
        elif x[i - 1] <= x[i] and x[i + 1] >= x[i]:
            print(0)
            exit()

    print(1)