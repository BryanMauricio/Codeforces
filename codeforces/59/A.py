import re

string = input()
big_letters = len(re.findall(r'[A-Z]',string))
w = len(string)
small_letters = w - big_letters

if big_letters > small_letters:
    print(string.upper())
elif small_letters > big_letters:
    print(string.lower())
elif big_letters == small_letters:
    print(string.lower())