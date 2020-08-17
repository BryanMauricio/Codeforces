x = int(input())
y = str(x)

result = "".join(reversed(y))

u = result.strip("0")
i = y.strip("0")


if i == u:
    print("YES")
else:
    print("NO")