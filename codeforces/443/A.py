import sys

x = list(input())
x.sort()
let = []
for y in range(len(x)):
    let.append(str(x[y]))

let = list(dict.fromkeys(let))
let = sorted(let)
let.remove("{")
let.remove("}")
if len(let) == 1:
    print(1)
    sys.exit()
elif len(let) - 2 == 0:
    print(1)
    sys.exit()
elif len(let) - 2 < 0:
    print(0)
    sys.exit()
else:
    print(len(let) - 2)