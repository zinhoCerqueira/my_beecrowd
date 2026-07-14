import re

padrao = r'^[A-Z]{3}-\d{4}$'
n = int(input())

for i in range(n):
    
    placa = input()

    if re.match(padrao, placa):
        
        if int(placa[7]) == 1 or int(placa[7]) == 2:
            print("MONDAY")

        elif int(placa[7]) == 3 or int(placa[7]) == 4:
            print("TUESDAY")

        elif int(placa[7]) == 5 or int(placa[7]) == 6:
            print("WEDNESDAY")

        elif int(placa[7]) == 7 or int(placa[7]) == 8:
            print("THURSDAY")

        elif int(placa[7]) == 9 or int(placa[7]) == 0:
            print("FRIDAY") 


    else:
        print("FAILURE")