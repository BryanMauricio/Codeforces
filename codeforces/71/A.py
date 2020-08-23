for y in range(int(input())):
    u = input()
    y = len(u) - 2
    if len(u) > 10:
        print(*u[0],y , *u[-1], sep="")
    else:
        print(u)