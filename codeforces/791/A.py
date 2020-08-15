a, b = map(int, input().split())

pierwszy_rok_dla_a = a * 3
pierwszy_rok_dla_b = b * 2
drugi_rok_dla_a = pierwszy_rok_dla_a * 3
drugi_rok_dla_b = pierwszy_rok_dla_b * 2
trzeci_rok_dla_a = drugi_rok_dla_a * 3
trzeci_rok_dla_b = drugi_rok_dla_b * 2
czwarty_dla_a = trzeci_rok_dla_a * 3
czwarty_dla_b = trzeci_rok_dla_b * 2
piaty_dla_a = czwarty_dla_a * 3
piaty_dla_b = czwarty_dla_b * 2
szosty_a = piaty_dla_a * 3
szosty_b = piaty_dla_b * 2
siodmy_a = szosty_a * 3
siodmy_b = szosty_b * 2

if pierwszy_rok_dla_a > pierwszy_rok_dla_b:
    print(1)
elif drugi_rok_dla_a > drugi_rok_dla_b:
    print(2)
elif trzeci_rok_dla_a > trzeci_rok_dla_b:
    print(3)
elif czwarty_dla_a > czwarty_dla_b:
    print(4)
elif piaty_dla_a > piaty_dla_b:
    print(5)
elif szosty_a > szosty_b:
    print(6)
elif siodmy_a > siodmy_b:
    print(7)