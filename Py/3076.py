while True:
    try:
        ano = int(input())
    except EOFError:
        break

    if ano % 100 == 0:
        seculo = ano // 100
    else:
        seculo = ano // 100 + 1

    print(seculo)