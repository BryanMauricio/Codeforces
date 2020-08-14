import sys

x = int(input())

multiplication = 3 * x

if x == 0:
    print(1)
    sys.exit()
if x == 1:
    print(7)

while x > 1:
    multiplication += 3
    print(x * multiplication + 1)
    break