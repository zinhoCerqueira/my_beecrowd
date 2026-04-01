i, j = 0, 1
r_i = 0

while i <= 2:

    print(f"I={i:g} J={j:g}")    
    
    r_i = r_i + 1
    j = j + 1

    if r_i == 3:
        i = i + 0.2
        j = 1 + i
        r_i = 0