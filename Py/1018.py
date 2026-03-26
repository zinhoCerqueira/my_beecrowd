init = int(input())

a = init

cem = a // 100
a = a % 100

cinquenta = a // 50
a = a % 50

vinte = a // 20
a = a % 20

dez = a // 10
a = a % 10

cinco = a // 5
a = a % 5

dois = a // 2
a = a % 2

um = a // 1
a = a % 1

print(init)
print(cem, "nota(s) de R$ 100,00")
print(cinquenta, "nota(s) de R$ 50,00")
print(vinte, "nota(s) de R$ 20,00")
print(dez, "nota(s) de R$ 10,00")
print(cinco, "nota(s) de R$ 5,00")
print(dois, "nota(s) de R$ 2,00")
print(um, "nota(s) de R$ 1,00")