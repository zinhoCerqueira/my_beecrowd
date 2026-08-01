e, f, c = map(int, input().split())

empty_bottles = e + f
drinked = 0

while empty_bottles >= c:
    new_bottles = empty_bottles // c 
    drinked += new_bottles           
    empty_bottles = (empty_bottles % c) + new_bottles

print(drinked)