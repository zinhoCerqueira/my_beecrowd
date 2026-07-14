a, b, = (map(int, input().split()))

lista = list(map(int, input().split()))

p1 = 0
p2 = 1

v = False

while p2 < len(lista):
    xxx = abs(lista[p1] - lista[p2])
    if abs(lista[p1] - lista[p2]) > a:
        print("GAME OVER")
        exit()

    p1 += 1
    p2 += 1

print("YOU WIN")