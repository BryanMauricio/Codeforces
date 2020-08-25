x = int(input())
y = x / 2
u = "2"
y = int(y)
u = "2"
up = x - 3
down = up / 2
down = int(down)
if x % 2 == 0:
    print(int(y))
    print(*u * y, sep=" ")
else:
    print(down + 1)
    print(*u * down, 3, sep= " ")