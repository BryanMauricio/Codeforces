temp = input().split(" ")
y = "".join(temp)
x = y.replace("+", "")
u = list(x)
num = []
for y in range(len(u)):
    num.append(int(u[y]))

num = sorted(num)
up = list(str(num))

print(*num, sep="+")