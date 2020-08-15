a, b = map(int, input().split())

board = a * b
resultado = board / 2

if board % 2 == 0:
    print(int(resultado))
if board % 2 == 1:
    print(int(resultado - 0.5))