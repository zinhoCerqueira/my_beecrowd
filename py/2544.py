import math

while True:
    try:

        n = int(input())

        x = math.log2(n)

        print(math.floor(x))
         
    except EOFError:
        break
