a, b, c = map(int , input().split())
x = 1
razer = 0

for y in range(c):
    count = x * a
    x += 1
    razer += count

if razer - b > 0:
    print(razer - b)
else:
    print(0)