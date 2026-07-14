import math

a, b = map(float, input().split())
c, d = map(float, input().split())

dist = math.sqrt(((c-a)*(c-a)) + ((d-b)*(d-b)))

print(f"{(dist):.4f}")