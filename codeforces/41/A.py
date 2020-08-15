x = input()
y = input()

result = "".join(reversed(x))

if result == y:
    print("YES")
else:
    print("NO")