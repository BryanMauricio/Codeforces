a, b, c, d, e = map(int,input().split())

wynik_pierwszego = d + (b * a) + d
wynik_drugiego = e + (c * a) + e

if wynik_pierwszego < wynik_drugiego:
    print("First")
elif wynik_pierwszego > wynik_drugiego:
    print("Second")
elif wynik_drugiego == wynik_pierwszego:
    print("Friendship")