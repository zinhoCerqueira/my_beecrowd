import math

a = int(input())

x = ((( (1 + math.sqrt(5)) / 2) ** a) - ((( 1 - math.sqrt(5)) / 2) ** a)) / math.sqrt(5)

print(f"{x:.1f}")