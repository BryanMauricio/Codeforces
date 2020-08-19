import sys

a = input()
b = "".join(reversed(a))

if "H" in a or "A" in a or "U" in a or "V" in a or "W" in a or "X" in a or "I" in a or "T" in a or "M" in a or "Y" in a or "O" in a:
    if "B" not in a and "C" not in a and "D" not in a and "E" not in a and "F" not in a and "G" not in a and "J" not in a and "K" not in a and "L" not in a and "N" not in a and "P" not in a and "Q" not in a and "R" not in a and "S" not in a and "Z" not in a:
        if a == b:
            print("YES")
            sys.exit()

print("NO")