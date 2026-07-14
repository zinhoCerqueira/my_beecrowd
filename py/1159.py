a = -1

while a != 0:
    a = int(input())

    if a != 0:

        contador = 0
        soma = 0
        numero = a

        while contador < 5:
            if numero % 2 == 0:
                contador = contador + 1
                soma = soma + numero
            numero = numero + 1
        
        print(soma)