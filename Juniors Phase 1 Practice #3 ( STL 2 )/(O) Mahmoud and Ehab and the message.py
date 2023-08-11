def Solve():
    k, n, m = map(int, input().split())
    words = [*zip(input().split(), map(int, input().split()))]
    groups = dict()
    minGroup = dict()
    for group in range(n):
        arr = list(map(int, input().split()))
        arr.pop(0)
        for i in arr:
            groups[words[i - 1][0]] = group
            try:
                minGroup[group] = min(minGroup[group], words[i - 1][1])
            except:
                minGroup[group] = words[i - 1][1]

    total = 0
    message = input().split()
    for i in message:
        total += minGroup[groups[i]]
    print(total)


Solve()
