dias = int(input())
anos = 0
meses = 0

if dias > 365:
    anos = dias // 365
    dias = dias % 365

    if dias > 30:
        meses = dias // 30
        dias = dias % 30
    
elif dias >= 30:
        meses = dias // 30
        dias = dias % 30  

print(anos, "ano(s)")
print(meses, "mes(es)")
print(dias, "dia(s)")