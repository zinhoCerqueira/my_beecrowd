from struct import pack, unpack

linha = input()

a, b, c, d = linha.split(maxsplit=3)

a = int(a)
b = unpack('f', pack('f', float(b)))[0]

print(f"{a}{b:.6f}{c}{d}")
print(f"{a}\t{b:.6f}\t{c}\t{d}")
print(f"{a:>10}{b:>10.6f}{c:>10}{d:>10}")