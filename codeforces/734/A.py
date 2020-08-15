x = int(input())
y = input()
anton = y.count("A")
danik = y.count("D")

if anton > danik:
    print("Anton")
elif anton < danik:
    print("Danik")
elif anton == danik:
    print("Friendship")