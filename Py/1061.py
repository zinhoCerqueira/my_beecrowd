d1 = int(input().split()[1])
h1, m1, s1 = map(int, input().split(" : "))

d2 = int(input().split()[1])
h2, m2, s2 = map(int, input().split(" : "))

if s2 < s1:
    s = 60 - s1 + s2
    m1 = m1 + 1
else :
    s = s2 - s1

if m2 < m1:
    m = 60 - m1 + m2
    h1 = h1 + 1
else :
    m = m2 - m1

if h2 < h1:
    h = 24 - h1 + h2
    d1 = d1 + 1
else :
    h = h2 - h1

if d2 > d1:
    d = d2 - d1
elif d2 == d1:
    d = 0

print(d, "dia(s)")
print(h, "hora(s)")
print(m, "minuto(s)")
print(s, "segundo(s)")