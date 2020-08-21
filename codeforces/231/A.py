count = 0

for y in range(int(input())):
    a, b, c = map(int, input().split())
    wynik = a + b + c
    if wynik >= 2:
        count += 1
    else:
        pass
print(count)