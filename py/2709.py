def eh_primo(n):
    if n < 2:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False

    return True


while True:
    
    lista_moedas = []
    soma = 0
    
    try:
        
        qtd_moedas = int(input())
        for i in range(qtd_moedas):
            lista_moedas.append(int(input()))

        salto = int(input())

        for i in range(qtd_moedas - 1, -1, -salto):
            soma += lista_moedas[i]
        
        if(eh_primo(soma)):
            print("You’re a coastal aircraft, Robbie, a large silver aircraft.")
        else:
            print("Bad boy! I’ll hit you.")


    
    except EOFError:
        break