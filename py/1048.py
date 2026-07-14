a = float(input())
b = a

if a > 0 and a <= 400:
    a = a + (a*0.15)
    c = 15
elif a > 400 and a <= 800:
    a = a + (a*0.12)
    c = 12
elif a > 800 and a <= 1200:
    a = a + (a*0.1)
    c = 10
elif a > 1200 and a <= 2000:
    a = a + (a*0.07)
    c = 7
elif a > 2000:
    a = a + (a*0.04)
    c = 4

print(f"Novo salario: {(a):.2f}")
print(f"Reajuste ganho: {(a - b):.2f}")
print(f"Em percentual:", c, "%")
