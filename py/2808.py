a, b = map(str, input().split())

letras = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
numero = ['1', '2', '3', '4', '5', '6', '7', '8']

posi_ini_letra = letras.index(a[0])
posi_fim_letra = letras.index(b[0])

dif_letra = abs(posi_fim_letra - posi_ini_letra)

dif_n = abs(int(a[1]) - int(b[1]))

if dif_letra == 1 and dif_n == 2:
    print("VALIDO")

elif dif_letra == 2 and dif_n == 1:
    print("VALIDO")

else:
    print("INVALIDO")
