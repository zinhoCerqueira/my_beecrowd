a = input().strip()

# PASSO 1 e 2 — sinal
if a[0] == '-':
    sinal = '-'
    a = a[1:]
else:
    sinal = '+'

# PASSO 3 — separar parte inteira e decimal
if '.' in a:
    pre_ponto, pos_ponto = a.split('.')
else:
    pre_ponto = a
    pos_ponto = ""

# PASSO EXTRA — tratar zero
if int(pre_ponto) == 0 and (pos_ponto == "" or int(pos_ponto) == 0):
    print(sinal + "0.0000E+00")
    exit()

# PASSO 4 — encontrar primeiro dígito significativo
if int(pre_ponto) >= 1:
    primeiro_digito = pre_ponto[0]
    expoente = len(pre_ponto) - 1
    auxiliar = pre_ponto[1:] + pos_ponto
else:
    for i in range(len(pos_ponto)):
        if pos_ponto[i] != '0':
            primeiro_digito = pos_ponto[i]
            expoente = -(i + 1)
            auxiliar = pos_ponto[i + 1:]
            break

# PASSO 5 — garantir pelo menos 5 dígitos
while len(auxiliar) < 5:
    auxiliar += '0'

# PASSO 6 — separar base e dígito de arredondamento
base = auxiliar[:4]
round_digit = auxiliar[4]

# PASSO 7 — arredondamento
if round_digit >= '5':
    numero = int(primeiro_digito + base) + 1
    numero_str = str(numero)

    if len(numero_str) > 5:  # overflow
        primeiro_digito = numero_str[0]
        base_final = numero_str[1:5]
        expoente += 1
    else:
        numero_str = numero_str.zfill(5)
        primeiro_digito = numero_str[0]
        base_final = numero_str[1:]
else:
    base_final = base

# PASSO 8 — montar mantissa
mantissa = primeiro_digito + "." + base_final

# PASSO 9 — formatar expoente
if expoente >= 0:
    exp_str = "+%02d" % expoente
else:
    exp_str = "-%02d" % abs(expoente)

# PASSO 10 — saída final
print(sinal + mantissa + "E" + exp_str)