n = int(input())

prefix = [[0] * (n + 1) for _ in range(n)]

for i in range(n):
    linha = list(map(int, input().split()))
    for j in range(n):
        prefix[i][j + 1] = prefix[i][j] + linha[j]

dp = [[0] * (n + 1) for _ in range(n)]

dp[n - 1][0] = prefix[n - 1][n]

for i in range(n - 2, -1, -1):
    tam = i + 1
    for j in range(n - tam + 1):
        peso = prefix[i][j + tam] - prefix[i][j]

        if j == 0:
            dp[i][j] = peso + dp[i + 1][j]
        elif j == n - tam:
            dp[i][j] = peso + dp[i + 1][j - 1]
        else:
            dp[i][j] = peso + min(dp[i + 1][j - 1], dp[i + 1][j])

print(min(dp[0][:n]))