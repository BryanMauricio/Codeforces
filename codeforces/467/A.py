count = 0

for y in range(int(input())):
    a, b = map(int, input().split())
    if a + 2 <= b:
        count += 1
    else:
        pass
print(count)