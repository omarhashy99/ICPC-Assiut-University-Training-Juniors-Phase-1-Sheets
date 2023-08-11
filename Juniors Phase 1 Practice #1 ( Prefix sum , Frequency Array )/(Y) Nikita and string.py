def Solve():
    s = input()
    n = len(s)
    preA = [0] + [int(i == "a") for i in s]
    preB = [0] + [int(i == "b") for i in s]
    re = 0
    for i in range(1, n + 1):
        preA[i] += preA[i - 1]
        preB[i] += preB[i - 1]
    for i in range(0, n + 1):
        for u in range(i, n + 1):
            t = preA[i]
            t += preB[u] - preB[i]
            t += preA[-1] - preA[u]
            re = max(re, t)
    print(re)


Solve()
