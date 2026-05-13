x = int(input())

st, bt, at = 0, 0, 0
s1t, b1t, a1t = 0, 0, 0

for _ in range(x):

    nome = input()
    s, b, a = map(int, input().split())
    s1, b1, a1 = map(int, input().split())

    st += s
    bt += b
    at += a

    s1t += s1
    b1t += b1
    a1t += a1

print(f"Pontos de Saque: {(100 * s1t / st):.2f} %.")
print(f"Pontos de Bloqueio: {(100 * b1t / bt):.2f} %.")
print(f"Pontos de Ataque: {(100 * a1t / at):.2f} %.")