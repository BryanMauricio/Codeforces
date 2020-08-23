import sys

x = int(input())
y = input()
if x < 26:
    print("NO")
    sys.exit()
u = y.lower()
if "a" in u and "b" in u and "c" in u and "d" in u and "e" in u and "f" in u and "g" in u and "h" in u and "i" in u and "j" in u and "k" in u and "l" in u and "m" in u and "n" in u and "o" in u and "p" in u and "q" in u and "r" in u and "s" in u and "t" in u and "u" in u and "v" in u and "w" in u and "x" in u and "y" in u and "z" in u:
    print("YES")
else:
    print("NO")