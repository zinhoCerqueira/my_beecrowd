import math

while True:
    try:

        li = list(map(int, input().split()))

        d = math.sqrt(((li[2] - li[0])**2) + ((li[3] - li[1])**2))

        skill = li[5] + li[6]

        d = d + li[4] * 1.5 

        if d <= skill:
            print("Y")
        else:
            print("N")

    except EOFError:
        break
