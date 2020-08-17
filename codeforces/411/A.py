import sys

x = input()

count_small = 0
count_big = 0
for i in x:
      if i.islower():
            count_small += 1
for y in x:
    if y.isupper():
        count_big += 1
u = len(x)

if u >= 5:
    if count_big >= 1:
        if count_small >= 1:
            if "1" in x or "2" in x or "3" in x or "4" in x or "5" in x or "6" in x or "7" in x or "8" in x or "9" in x or "0" in x:
                print("Correct")
                sys.exit()


print("Too weak")