import sys

x = int(input())

y = x / 2
if x == 1:
    print(0)
    sys.exit()
wynik = (x + y) % (x + 1) + 0.5

print(int(wynik))