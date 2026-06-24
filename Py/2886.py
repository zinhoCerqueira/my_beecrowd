qtd = int(input())

for i in range(qtd):

    n, k = map(int, input().split())
    garrafas = n

    if n > k : 

        ganhar = int(n / k)
        garrafas = n - (ganhar * k)

        garrafas = ganhar + garrafas
        print(garrafas)
    
    elif k > n:
        print(n)
    
    elif n == k:
        print(1)
        


