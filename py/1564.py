while True:
    try:
        valor = int(input())
    except EOFError:
        break
    
    if valor == 0:
        print("vai ter copa!")
    else:
        print("vai ter duas!")
