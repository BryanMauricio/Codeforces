import sys

x = int(input())
y = input()


s = str(y)
u = x / 2
a = s[0:int(u)]
b = s[int(u):]
n = int(a) #
j = int(b) #

sum_a = 0
sum_b = 0

for digit in str(n):
    sum_a += int(digit)
for digin in str(j):
    sum_b += int(digin)

if "4" in s or "7" in s:
    if "1" not in s and "2" not in s and "3" not in s and "5" not in s and "6" not in s and "8" not in s and "9" not in s and "0" not in s:
        if sum_a == sum_b:
            print("YES")
            sys.exit()


print("NO")