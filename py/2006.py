a = int(input())

x = list(map(int, input().split()))
w = 0

for i in range(len(x)):
    if a == x[i]:
        w = w + 1

print(w)    
