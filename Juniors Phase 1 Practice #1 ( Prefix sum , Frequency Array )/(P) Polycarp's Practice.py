def Solve():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    arrS = arr.copy()
    arrS.sort()
    arrS = arrS[n - k::]
    pointer1 = 0
    pointer2 = 0
    print(sum(arrS))
    re = []
    freq = [0] * 2005
    for i in arrS:
        freq[i] += 1

    while pointer2 < n:
        if freq[arr[pointer2]] > 0:
            freq[arr[pointer2]] -= 1;
            re.append(pointer2 - pointer1 + 1)
            pointer1 = pointer2 + 1
        pointer2 += 1

    total = sum(re)
    while total < n:
        total += 1
        re[-1] += 1
    print(*re)


Solve()
