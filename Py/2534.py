
while True:
    try:
        n, q = map(int, input().split())
        notas = []

        for _ in range(n):

            nota = int(input())
            notas.append(nota)
        
        notas.sort(reverse=True)

        for _ in range(q):
            
            posi = int(input())
            print(notas[posi - 1])


    except EOFError:
        break
