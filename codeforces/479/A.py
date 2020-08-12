a = int(input())
b = int(input())
c = int(input())

y = a + (b * c)
x = a * (b + c)
z = a * b * c
u = (a + b) * c
i = a + b + c

list = [y, x, z, u, i]


print(max(list))