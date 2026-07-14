netos = int(input())

while netos != 0:
    # Resetando as variáveis para cada caso de teste
    mais_caro = 0
    mais_barato = 999999999
    
    presentes = list(map(int, input().split()))
    p1 = 0
    p2 = len(presentes) - 1
    
    # A lógica dos ponteiros funciona para qualquer quantidade de netos (inclusive 1)
    while p1 < p2:
        par_presente = presentes[p1] + presentes[p2]
        
        # Avança os ponteiros para o próximo par
        p1 += 1
        p2 -= 1 

        # Verifica se este par é o maior ou o menor até agora
        if par_presente > mais_caro:
            mais_caro = par_presente
        
        if par_presente < mais_barato:
            mais_barato = par_presente
        
    # Imprime primeiro o mais caro, depois o mais barato
    print(mais_caro, mais_barato)

    # Lê o próximo caso de teste
    netos = int(input())