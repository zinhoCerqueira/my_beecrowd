init = float(input())

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

m_cinquenta = a // 0.50
a = a % 0.50

m_vintecinco = a // 0.25
a = a % 0.25

m_dez = a // 0.10
a = a % 0.10

m_cinco = a // 0.05
a = a % 0.05

m_um = a // 0.01
a = a % 0.01

print("NOTAS:")
print(int(cem), "nota(s) de R$ 100.00")
print(int(cinquenta), "nota(s) de R$ 50.00")
print(int(vinte), "nota(s) de R$ 20.00")
print(int(dez), "nota(s) de R$ 10.00")
print(int(cinco), "nota(s) de R$ 5.00")
print(int(dois), "nota(s) de R$ 2.00")

print("MOEDAS:")
print(int(um), "moeda(s) de R$ 1.00")
print(int(m_cinquenta), "moeda(s) de R$ 0.50")
print(int(m_vintecinco), "moeda(s) de R$ 0.25")
print(int(m_dez), "moeda(s) de R$ 0.10")
print(int(m_cinco), "moeda(s) de R$ 0.05")
print(int(m_um), "moeda(s) de R$ 0.01")