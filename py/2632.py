import math

a = int(input())

n_fire = [20, 30, 50]
n_water = [10, 25, 40]
n_earth = [25, 50, 75]
n_air = [18, 38, 60]

for i in range(a):

    w, h, x0, y0 = map(int, input().split()) 
    elemento, nv, cx, cy = map(str, input().split())

    cx = int(cx)
    cy = int(cy)

    closest_x = max(x0, min(cx, x0 + w))
    closest_y = max(y0, min(cy, y0 + h))

    d = math.sqrt(pow(cx - closest_x, 2) + pow(cy - closest_y, 2))

    if elemento == "fire":
        dano = 200

        if nv == "1":
            r = 20
        elif nv == "2":
            r = 30
        elif nv == "3":
            r = 50

    elif elemento == "water":
        dano = 300

        if nv == "1":
            r = 10
        elif nv == "2":
            r = 25
        elif nv == "3":
            r = 40

    elif elemento == "earth":
        dano = 400

        if nv == "1":
            r = 25
        elif nv == "2":
            r = 55
        elif nv == "3":
            r = 70

    elif elemento == "air":
        dano = 100

        if nv == "1":
            r = 18
        elif nv == "2":
            r = 38
        elif nv == "3":
            r = 60

    if d <= r:
        print(dano)
    else:
        print(0) 
    



    