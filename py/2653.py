meu_set = set()

while True:
    try:
        s = input()
        meu_set.add(s)
    except EOFError:
        break

print(len(meu_set))