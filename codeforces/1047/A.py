import sys

x = int(input())
y = x / 2 - 1
z = x / 2 - 2
u = x / 3
i = x - 1
m = i / 2
a = x - 2
j = x - 2
b = x - 3
if x == 3:
    print(1, 1, 1)
    sys.exit()
elif j % 3 != 0:
    print(j, 1, 1)
    sys.exit()
elif b % 3 != 0:
    print(b , 1, 2)
elif x == 5:
    print(1, 2, 2)
    sys.exit()
elif x == 7:
    print(4, 1, 2)
    sys.exit()
elif x == 8:
    print(2, 2, 4)
    sys.exit()