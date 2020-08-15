a, b, c, d, e = map(int, input().split())
f, g, h, i, j = map(int, (input().split()))
k, l, m, n, o = map(int, (input().split()))
p, r, s, t, w = map(int, (input().split()))
u, y, z, x, q = map(int, (input().split()))

if h == 1 or n == 1 or s == 1 or l == 1:
    print(1)
elif g == 1 or i == 1 or r == 1 or t == 1:
    print(2)
elif o == 1 or k == 1 or z == 1 or c == 1:
    print(2)
elif y == 1 or x == 1 or w == 1 or j == 1 or d == 1 or b == 1 or f == 1 or p == 1:
    print(3)
elif u == 1 or q == 1 or e == 1 or a == 1:
    print(4)
elif m == 1:
    print(0)