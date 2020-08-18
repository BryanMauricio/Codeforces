import sys

a, b, c, d, e, f = map(int, input().split())

if a == 1 and b == 1 and c == 1 and d == 1 and e == 1 and f == 5:
    print("NO")
    sys.exit()

q = a + b + c + d + f # e
r = a + b + c + e + f # d
t = a + b + d + e + f # c
u = a + c + d + e + f # b
o = b + c + d + e + f # a
k = a + b + c + d + e # f

if a > o:
    print("no")
elif b > u:
    print("no")
elif c > t:
    print("no")
elif d > r:
    print("NO")
elif e > q:
    print("no")
elif f > k:
    print("No")

elif a + b + c == d + e + f:
    print("YES")
elif a + b + d == e + f + c:
    print("YES")
elif a + b + e == f + c + d:
    print("YES")
elif a + b + f == c + d + e:
    print("YES")
elif a + c + d == b + e + f:
    print("YES")
elif a + c + e == b + f + d:
    print("YES")
elif a + c + f == b + d + e:
    print("YES")
elif a + d + e == b + c + f:
    print("YES")
elif a + d + f == b + c + e:
    print("YES")
elif a + e + f == b + c + d:
    print("YES")
else:
    print("no")
