a, b, c, d = map(float, input().split())

media = ((a*2) + (b*3) + (c*4) + (d*1)) / (10)

print(f"Media: {(media):.1f}")

if media >= 7:
    print("Aluno aprovado.")
elif media < 5:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    e = float(input())
    print("Nota do exame:", e)

    media_final = (media + e) / (2)

    if media_final > 5:
        print("Aluno aprovado.")
    else:
        print("Aluno eprovado")

    print(f"Media final: {(media_final):.1f}")