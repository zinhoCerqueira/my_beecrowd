cont = 0

a, b, c, d = (map(int, input().split()))

#ABC
if (a + b > c) and (a + c > b) and (b + c > a):
    print("S")
    exit()

#ABD
if (a + b > d) and (a + d > b) and (b + d > a):
    print("S")
    exit()

#BCD
if (d + b > c) and (d + c > b) and (b + c > d):
    print("S")
    exit()

#ACD
if (a + d > c) and (a + c > d) and (d + c > a):
    print("S")
    exit()

print("N")
