i, j = 1, 7
r_i = 0

while i <= 9 and r_i <= 3:
    if i % 2 != 0:
        print("I=", i, " J=", j, sep='')
    
    r_i = r_i + 1
    j = j - 1

    if r_i == 3:
        i = i + 1
        j = 7
        r_i = 0