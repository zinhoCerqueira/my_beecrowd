a = input()

quantidade = a.count('1')

if quantidade % 2 == 0:
    a = a + "0"
else:
    a = a + "1"

print(a)