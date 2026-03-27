a, b = map(int, input().split())

if a == 1:
    preco = 4.00
elif a == 2:
    preco = 4.50    
elif a == 3:
    preco = 5.00
elif a == 4:
    preco = 2.00
elif a == 5:
    preco = 1.50

print(f"Total: R$ {((b * preco)):.2f}")