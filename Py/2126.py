caso = 1
while True:
    try:
        a = input()
        b = input()
        
        quantidade = 0
        tamanho_a = len(a)

        for i in range(len(b) - tamanho_a + 1):
            #print(b[i:i + tamanho_a])
            if a == b[i:i + tamanho_a]:
                pos = i + 1
                quantidade = quantidade + 1
                i = i + tamanho_a
        
        
        if quantidade != 0:

            print(f"Caso #{caso}:")
            print("Qtd.Subsequencias:", quantidade)
            print("Pos:", pos)

        else:
            
            print(f"Caso #{caso}:")
            print("Nao existe subsequencia")

        caso = caso + 1
        print()
    except EOFError:
        break