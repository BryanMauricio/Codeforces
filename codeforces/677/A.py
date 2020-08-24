a, b = map(int, input().split())
y = input().split()
num = []
count = 0
for k in range(len(y)):
    num.append(int(y[k]))

for i in num:
    if i <= b:
        count += 1
    elif i > b:
        count += 2

print(count)