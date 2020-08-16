a, b, c, d = map(int, input().split())

if a + b == c + d:
    print("YES")
elif a + c == d + b:
    print("YES")
elif a + d == c + b:
    print("YES")

elif a + b + c == d:
    print("YES")
elif a + b + d == c:
    print("YES")
elif a + d + c == b:
    print("YES")

elif b + a + c == d:
    print("YES")
elif b + c + d == a:
    print("YES")
elif b + a + d == c:
    print("YES")

elif c + a + b == d:
    print("YES")
elif c + b + d == a:
    print("YES")
elif c + a + d == b:
    print("YES")
else:
    print("NO")