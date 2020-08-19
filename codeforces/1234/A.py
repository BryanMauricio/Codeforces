
for y in range(int(input())):
    a = int(input())
    temp = input().split(" ")
    num = []
    for y in range(len(temp)):
        num.append(int(temp[y]))

    u = sum(num)
    k = len(num)

    if u % k == 0:
        print(int(u / k))
    else:
        print(int(u / k + 1))