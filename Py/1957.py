hex_map = "0123456789ABCDEF"

s = []
a = int(input())

while a > 0:
    s.append(hex_map[a % 16])
    a //= 16

resultado = "".join(s[::-1])

print(resultado)