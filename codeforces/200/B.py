x = int(input())
u = input().split()
num = []

for y in range(len(u)):
    num.append(int(u[y]))

y = sum(num)
wynik = y / x
print(wynik)