x = input()
y = input()

wynik = int(x) + int(y)

k = x.replace("0", "")
u = y.replace("0", "")

h = int(k)
g = int(u)


i = str(wynik)
q = i.replace("0", "")
t = int(q)

if h + g == t:
    print("YES")
else:
    print("NO")