renas = ["Dasher", 
         "Dancer", 
         "Prancer", 
         "Vixen", 
         "Comet", 
         "Cupid", 
         "Donner", 
         "Blitzen", 
         "Rudolph"]

lista = list(map(int, input().split()))

total = sum(lista) - 1

if total >= 9:
    divisor = int(total / 9)
    pos = int (total - (divisor)* 9)
    print(renas[pos])

else:
    print(renas[total])