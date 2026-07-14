a, b, c = input().split()
a, b, c = int(a), int(b), float(c)

a1, b1, c1 = input().split()
a1, b1, c1 = int(a1), int(b1), float(c1)

print(f"VALOR A PAGAR: R$ {((b*c) + (b1*c1)):.2f}")