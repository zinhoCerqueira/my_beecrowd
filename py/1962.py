a = int(input())

for i in range(a):
    ano = int(input())

    if ano >= 2015:
        resp = 2015 - ano - 1
        print(abs(resp), "A.C.")
    else:
        resp = 2015 - ano
        print(resp, "D.C.")