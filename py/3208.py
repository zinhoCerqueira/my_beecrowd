import sys

MAX_L = 1000000

eh_primo = [True] * MAX_L
eh_primo[0] = eh_primo[1] = False

for i in range(2, int(MAX_L**0.5) + 1):
    if eh_primo[i]:
        for j in range(i * i, MAX_L, i):
            eh_primo[j] = False

primos = [i for i in range(MAX_L) if eh_primo[i]]


def resolver():
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    it = iter(input_data)
    
    while True:
        try:
            K_str = next(it)
            L_str = next(it)
        except StopIteration:
            break
        
        K = int(K_str)
        L = int(L_str)
        
        if K == 0 and L == 0:
            break
        
        menor_fator = None
        
        for p in primos:
            if p >= L:
                break
            if K % p == 0:
                menor_fator = p
                break
        
        if menor_fator is not None:
            print(f"BAD {menor_fator}")
        else:
            print("GOOD")

if __name__ == "__main__":
    resolver()