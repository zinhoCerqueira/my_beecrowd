while True:
    try:
        alfabeto = input()
        numero_letras = int(input())
        letras = list(map(int, input().split()))

        palavra = ''

        for i in range(len(letras)):
            palavra = palavra + alfabeto[letras[i] - 1]
        
        print(palavra)

    except EOFError:
        break
