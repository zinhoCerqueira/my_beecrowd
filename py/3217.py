import math

def resolver_chuva():
    L, K, T1, T2, H = map(float, input().split())

    if H < L:
        F1 = H
        F2 = H
    else:
        a = T1
        b = -(H + K * T1 + K * T2)
        c = K * L

        delta = b**2 - 4 * a * c
        v = (-b + math.sqrt(max(0.0, delta))) / (2 * a)
        F_vazamento = v * T1

        if H == L:
            F1 = H
            F2 = F_vazamento
        else: # H > L
            F1 = F_vazamento
            F2 = F_vazamento

    print(f"{F1:.9f} {F2:.9f}")

if __name__ == "__main__":
    resolver_chuva()