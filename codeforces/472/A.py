import sys

x = int(input())

y = x / 2
wyniczek = x - 4

inny = x - 4
inny_i = x - 9
if x % 2 == 0:
    print(wyniczek, x - wyniczek)
    sys.exit()
elif x % 10 == 5:
    print(x - 9 , 9)
    sys.exit()
elif inny % 3 == 0:
    print(inny , x - inny)
    sys.exit()
elif inny_i % 2 == 0 or inny_i % 3 == 0:
    print(inny_i , 9)