testagem = 1

x1, y1, x2, y2 = map(int, input().split())

while x1 != 0 and y1 != 0 and x2 != 0 and y2 != 0:
 
    meteoritos = 0
    qtd = int(input())

    for i in range(qtd):

        a, b = map(int, input().split())

        if x1 <= a <= x2 and y2 <= b <= y1:
            meteoritos += 1
        

    print("Teste", testagem)
    print(meteoritos)    
        
    testagem += 1
    x1, y1, x2, y2 = map(int, input().split())


