def eh_bissexto(ano):
    return (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0)

def calcular_conjuncao(N, periodo_planeta):
    # Alterado de round para int para seguir o critério de truncamento do problema
    dias_alvo = int(N * periodo_planeta * 365)
    
    ano, mes, dia = 2020, 12, 21
    dias_normais_meses = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    dias_transcorridos = 0
    
    while dias_transcorridos < dias_alvo:
        dia += 1
        dias_transcorridos += 1
        
        limite_do_mes = 29 if (mes == 2 and eh_bissexto(ano)) else dias_normais_meses[mes]
        
        if dia > limite_do_mes:
            dia = 1
            mes += 1
            if mes > 12:
                mes = 1
                ano += 1
                
    return dias_transcorridos, f"{ano}-{mes:02d}-{dia:02d}"

N = int(input())

dias_jup, data_jup = calcular_conjuncao(N, 11.9)
dias_sat, data_sat = calcular_conjuncao(N, 29.6)

print(f"Dias terrestres para Jupiter = {dias_jup}")
print(f"Data terrestre para Jupiter: {data_jup}")
print(f"Dias terrestres para Saturno = {dias_sat}")
print(f"Data terrestre para Saturno: {data_sat}")