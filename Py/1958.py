a = input()

if a[0] == '+':
    sinal = True
else:
    sinal = False

aux = a[1:]
ponto = 0

for index, char in enumerate(aux):
    if char == '.':
        ponto = index

pre_ponto = aux[:ponto]
pos_ponto = aux[ponto + 1:]

if int(pre_ponto) >= 1:
    primeiro_digito = pre_ponto[0]
    resto_complemento = pre_ponto[1:].join(pos_ponto)
else:
    for i in range(len(pos_ponto)):
        xxx = pos_ponto[i]
        if pos_ponto[i] != '0':
            primeiro_digito = pos_ponto[i]
            resto_complemento = pos_ponto[i:]
            break

mantissa = "".join([primeiro_digito, resto_complemento])

print(mantissa)