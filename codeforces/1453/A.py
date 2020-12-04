for _ in range(int(input())):
    a, b = map(int,input().split())
    n = input().split()
    m = input().split()
    k = 0
    for i in range(len(n)):
        for j in range(len(m)):
            if int(n[i]) == int(m[j]):
                k += 1
    print(k)     