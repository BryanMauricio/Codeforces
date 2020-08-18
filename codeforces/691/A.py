import sys

n = int(input())
a = input().split()
count = 0
num = "".join(a)
z = str(num)

if z == "1":
    print("YES")
    sys.exit()

y = num.count("0")


if y == 1 and n > 1:
    print("YES")
else:
    print("NO")