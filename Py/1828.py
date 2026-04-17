a = int(input())

for i in range(a):
    x, y = input().split()

    if x == y:
        print(f"Caso #{i + 1}: De novo!")

    elif x == "tesoura":
        if y == "papel" or y == "lagarto":
            print(f"Caso #{i + 1}: Bazinga!")
        elif y == "Spock" or y == "pedra":
            print(f"Caso #{i + 1}: Raj trapaceou!")
    
    elif x == "papel":
        if y == "pedra" or y == "Spock":
            print(f"Caso #{i + 1}: Bazinga!")
        elif y == "lagarto" or y == "tesoura":
            print(f"Caso #{i + 1}: Raj trapaceou!")
    
    elif x == "pedra":
        if y == "lagarto" or y == "tesoura":
            print(f"Caso #{i + 1}: Bazinga!")
        elif y == "papel" or y == "Spock":
            print(f"Caso #{i + 1}: Raj trapaceou!")
    
    elif x == "lagarto":
        if y == "Spock" or y == "papel":
            print(f"Caso #{i + 1}: Bazinga!")
        elif y == "pedra" or y == "tesoura":
            print(f"Caso #{i + 1}: Raj trapaceou!")

    elif x == "Spock":
        if y == "tesoura" or y == "pedra":
            print(f"Caso #{i + 1}: Bazinga!")
        elif y == "lagarto" or y == "papel":
            print(f"Caso #{i + 1}: Raj trapaceou!")