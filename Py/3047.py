a = int(input())
b = int(input())
c = int(input())

u = a - (b + c)

if b >= u and b >= c:
    print(b)

elif c >= u and c >= b:
    print(c)

else:
    print(u)