a, b, c = map(float, input().split())

triangulo = False

if a + b > c and a + c > b and b + c > a:
    triangulo = True

if triangulo:
    x = a + b + c
    print(f"Perimetro = {(x):.1f}")
else:
    x = ((a + b)*c)/(2)
    print(f"Area = {(x):.1f}")
