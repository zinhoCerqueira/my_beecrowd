
while True:
    try:
        imp = 0
        n_imp =0


        n = int(input())
        l = list(map(int, input().split()))

        for i in range(len(l)):
            if l[i] == 1:
                imp = imp + 1

        if imp >= (2/3)*n:
            print("impeachment")
        else:
            print("acusacao arquivada")



    except EOFError:
        break
