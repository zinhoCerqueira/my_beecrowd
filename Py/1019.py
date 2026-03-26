segundos = int(input())
minutos = 0
horas = 0

if segundos > 60:
    minutos = segundos // 60
    segundos = segundos % 60
    
    if minutos > 60:
        horas = minutos // 60
        minutos = minutos % 60   

print(f"{horas}:{minutos}:{segundos}")