while True:
    try:

        hora, minuto = map(int, input().split())

        if ano <= 100:
            print(1)
        
        else:

            ano = ano + 1
            resp = int( ano / 100 )

            print(resp)

    except EOFError:
        break