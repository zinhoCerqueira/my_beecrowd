m, n = map(int, input().split())

while m != 0 and n != 0:
    if m > 0 and n > 0:
        print("primeiro")
    elif m < 0 and n > 0:
        print("segundo")
    elif m < 0 and n < 0:
        print("terceiro")
    else:
        print("quarto")
    
    m, n = map(int, input().split())