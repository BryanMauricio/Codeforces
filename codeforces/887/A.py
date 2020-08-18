
x = int(input())

y = str(x)

u = y.replace("1", "")

p = "1"+u
s = int(p)

if s % 64 == 0:
    print("yes")
else:
    print("no")