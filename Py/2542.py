
while True:
    try:

        deck_m =[]
        deck_l =[]
        
        n = int(input())

        m, l = map(int, input().split())

        for _ in range(m):
            card = list(map(int, input().split()))
            deck_m.append(card)
        
        for _ in range(l):
            card = list(map(int, input().split()))
            deck_l.append(card)

        selected_m, selected_l = map(int, input().split())
        atr = int(input())

        card_m = deck_m[selected_m - 1]
        card_l = deck_l[selected_l - 1]

        if card_m[atr - 1] > card_l[atr - 1]:
            print("Marcos")
        elif card_m[atr - 1] < card_l[atr - 1]:
            print("Leonardo")
        else:
            print("Empate")
         
    except EOFError:
        break
