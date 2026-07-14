while True:
    try:
        angulo = float(input())

        segundos = int(angulo * 240)

        segundos %= 86400

        minutos = 0
        horas = 0

        hora_start = [6, 0, 0]

        if segundos >= 60:
            minutos = segundos // 60
            segundos = segundos - (minutos * 60)

        if minutos >= 60:
            horas = minutos // 60
            minutos = minutos - (horas * 60)

        hora_start[0] = (hora_start[0] + horas) % 24
        hora_start[1] = minutos
        hora_start[2] = segundos

        if 6 <= hora_start[0] < 12:
            print("Bom Dia!!")

        elif 12 <= hora_start[0] < 18:
            print("Boa Tarde!!")

        elif 18 <= hora_start[0] < 24:
            print("Boa Noite!!")

        else:
            print("De Madrugada!!")

        print(f"{int(hora_start[0]):02d}:{int(hora_start[1]):02d}:{int(hora_start[2]):02d}")

    except EOFError:
        break