import sys
a, b = map(int, input().split())
if a == 0 and b == 0:
    print("NO")
    sys.exit()
elif a + 1 == b or b + 1 == a or a == b:
    print("YES")

else:
    print("NO")
