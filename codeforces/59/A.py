# CodeForces A. Word 59A - 5
# Bryan Mauricio

x = input()
small = 0
biggs = 0


for y in x:
    if y.isupper():
        biggs += 1
for y in x:
    if y.islower():
        small += 1
if small > biggs:
    print(x.lower())
elif biggs > small:
    print(x.upper())
elif biggs == small:
    print(x.lower())