x = input()
u = str(x)
y = x.lower()
y = y.replace('a', '')
y = y.replace("o", "")
y = y.replace("y", "")
y = y.replace("e" , "")
y = y.replace("u", "")
y = y.replace("i", "")
num = []
num.append("")
for a in range(len(y)):
    num.append(str(y[a]))

print(*num, sep=".")