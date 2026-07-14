import math

a, b, c = map(float, input().split())

if a == 0.0:
    print("Impossivel calcular")
    exit()

delta = (b*b) - 4*a*c

if delta < 0:
    print("Impossivel calcular")
    exit()

x_mais = (-b + math.sqrt(delta)) / (2*a)
x_menos = (-b - math.sqrt(delta)) / (2*a)

print(f"R1 = {x_mais:.5f}")
print(f"R2 = {x_menos:.5f}")