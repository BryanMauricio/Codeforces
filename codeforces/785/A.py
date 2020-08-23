count = 0
for y in range(int(input())):
    n = input()
    if n == "Tetrahedron":
        count += 4
    elif n == "Cube":
        count += 6
    elif n == "Octahedron":
        count += 8
    elif n == "Dodecahedron":
        count += 12
    elif n == "Icosahedron":
        count += 20
print(count)