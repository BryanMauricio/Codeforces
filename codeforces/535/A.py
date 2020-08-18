x = int(input())

y = x // 10
k = x % 10
u = str(x)
first = {1: "ten", 2: "twenty" , 3: "thirty", 4: "forty", 5: "fifty", 6: "sixty", 7: "seventy", 8: "eighty", 9: "ninety"}
second = {1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine", 0: "zero"}
bigger_ten = {11: "eleven", 12: "twelve", 13: "thirteen", 14: "fourteen", 15: "fifteen", 16: "sixteen", 17: "seventeen", 18: "eighteen", 19: "nineteen"}
if x < 10:
    print(second[x])
elif x > 10 and x < 20:
    print(bigger_ten[x])

elif k == 0:
    print(first[y])
else:
    print(first[y]+"-"+second[k])