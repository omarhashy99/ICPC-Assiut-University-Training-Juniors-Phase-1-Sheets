def Solve():
    n, k = map(int, input().split())
    li = sorted(list(map(int, input().split())))
    freq = dict()
    t = 0
    for i in li:
        if i > k // 2:
            break
        t += 1
        try:
            freq[i] += 1
        except:
            freq[i] = 1

    total = 0
    try:
        if (k // 2) + (k // 2) == k:
            add = freq[k // 2] * (freq[k // 2] - 1)
            total += (add // 2)
    except:
        pass

    for i in range(t, n):
        try:
            add = freq[k - li[i]]
            total += add
        except:
            pass
    print(total)


Solve()
