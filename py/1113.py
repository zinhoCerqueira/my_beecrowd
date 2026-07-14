m, n = map(int, input().split())

while m != n:
    if m > n:
        print("Decrescente")
    elif n > m:
        print("Crescente")
    
    m, n = map(int, input().split())