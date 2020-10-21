n = int(input())
dp = [0] * (n + 1)
dp[0] = 1
dp[1] = 1
for i in range(2, n + 1):
    dp[i] = dp[i - 1] + dp[i - 2]
for i in range(1, n + 1):
    for j in range(n + 1):
        if i == dp[j]:
            print('O', end="")
            break
        elif dp[j] > i:
            print('o', end="")
            break