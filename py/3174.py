n = int(input())

t_bonecos = 0
t_arquitetos = 0
t_musicos = 0
t_desenhistas = 0

for i in range(n):
    a, b, c = map(str, input().split())

    if b == "bonecos":
        t_bonecos += int(c)
    
    elif b == "arquitetos":
        t_arquitetos += int(c)

    if b == "musicos":
        t_musicos += int(c)

    if b == "desenhistas":
        t_desenhistas += int(c)

total = int(t_bonecos / 8) + int(t_arquitetos / 4) + int(t_musicos / 6) + int(t_desenhistas / 12)

print(total)