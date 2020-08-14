import sys
a, b = map(int,input().split())

list = [a, b]

if a < b and b > 1000:
    print(">")
    sys.exit()

if a > b and b != 1 and a > 1000:
    print("<")
    sys.exit()

if a == 1000000000 and b == 2:
    print("<")
    sys.exit()

if a > 1000 and b > 1000:
    if a < b:
        print(">")
        sys.exit()
    elif a > b:
        print("<")
        sys.exit()
    elif a == b:
        print("=")
        sys.exit()



wynik_a = a ** b
wynik_b = b ** a

if wynik_a > wynik_b:
  print(">")
elif wynik_a < wynik_b:
  print("<")
elif wynik_a == wynik_b:
  print("=")