a, b, c = map(int , input().split())
x = 1
razera = 0

for y in range(c):
    count = x * a
    x += 1
    razera += count

if razera - b > 0:
    print(razera - b)
else:
    print(0)