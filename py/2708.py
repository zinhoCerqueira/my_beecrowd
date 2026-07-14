a = ""
in_ = 0
jipes = 0

while a != "ABEND":

    a = input()
    if " " in a:
        antes, depois = a.split(" ", 1)

        if antes == "SALIDA":
            in_ = in_ + int(depois)
            jipes = jipes + 1
        
        elif antes == "VUELTA":
            in_ = in_ - int(depois)
            jipes = jipes - 1

print(in_)
print(jipes)