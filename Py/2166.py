def rep(x, a, contador):

    if contador < a:
        return x + (1 / rep(2, a, contador + 1))

    else:
        return x


a = int(input())

resp = rep(1, a, 0)

print(f"{resp:.10f}")