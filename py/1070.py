a = int(input())

if a % 2 == 0:
    start = a + 1
else:
    start = a

for a in range(6):
    print(start)
    start = start + 2