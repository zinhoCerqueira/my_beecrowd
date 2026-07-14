a = int(input())

nota, mat = 0, 0 

for i in range(a):
    a, b = map(float, input().split())

    if b > nota:
        nota = b
        mat = a

if nota >= 8 :
    print(int(mat))
else:
    print("Minimum note not reached")
