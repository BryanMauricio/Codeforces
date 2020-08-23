y = input()
num = "".join(set(y))
u = len(num)

if u % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")