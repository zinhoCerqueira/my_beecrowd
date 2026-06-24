e, d = map(int, input().split())

if e > d:
    print("Eu odeio a professora!")

elif (d + 2) <= 24 and d - e >= 3:
    print("Muito bem! Apresenta antes do Natal!")

elif (d + 2) <= 24:
    print("Parece o trabalho do meu filho!")
    print("TCC Apresentado!")

else:
    print("Parece o trabalho do meu filho!")
    print("Fail! Entao eh nataaaaal!")