n = int(input())

count = 0

for y in range(0, n):
    i = input()
    if i == "++X" or i == "X++":
        count += 1
    else:
        count -= 1

print(count)