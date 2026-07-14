def rec(x, a, contador):

    if contador < a:
        return x + (1 / rec(6, a, contador + 1))

    else:
        return x


rep = int(input())

resp = rec(3, rep, 0)

print(f"{resp:.10f}")