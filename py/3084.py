while True:
    try:

        hora, minuto = map(int, input().split())

        hora = hora * 2
        hora = hora / 60
        
        minuto = minuto * 10
        minuto = minuto / 60


        print(hora, ":", minuto)

    except EOFError:
        break