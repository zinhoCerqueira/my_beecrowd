import sys

input = sys.stdin.readline

def merge_sort(v):
    n = len(v)
    if n <= 1:
        return v, 0

    mid = n // 2

    left, cost_left = merge_sort(v[:mid])
    right, cost_right = merge_sort(v[mid:])

    cost = cost_left + cost_right

    # soma dos tempos restantes da esquerda
    left_sum = [0] * (len(left) + 1)
    for i in range(len(left) - 1, -1, -1):
        left_sum[i] = left_sum[i + 1] + left[i][1]

    merged = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i][0] <= right[j][0]:
            merged.append(left[i])
            i += 1
        else:
            remaining = len(left) - i
            cost += left_sum[i] + remaining * right[j][1]
            merged.append(right[j])
            j += 1

    merged.extend(left[i:])
    merged.extend(right[j:])

    return merged, cost


while True:
    line = input()
    if not line:
        break

    n = int(line)

    ordem = list(map(int, input().split()))
    tempo = list(map(int, input().split()))

    pacotes = list(zip(ordem, tempo))

    _, resposta = merge_sort(pacotes)

    print(resposta)