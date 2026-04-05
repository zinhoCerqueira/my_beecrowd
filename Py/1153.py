x = int(input())

resp = x

for i in range(1, x):
    resp = resp * (x - i)

print(resp)