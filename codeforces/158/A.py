
a, b = map(int, input().split())
x = list(map(int, input().split()))

y = x[b - 1]
count = 0

for i in x:
    if i >= y and i > 0:
        count = count + 1

print(count)