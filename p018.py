with open("0018_triangle.txt", "r") as f:
    triangle_text = f.read()
m = [[int(n) for n in line.split(" ")] for line in triangle_text.split("\n")[:-1]]

for i in range(len(m)-2, -1, -1): # m-1 row to 1th row
    for j in range(i+1):
        m[i][j] += max(m[i + 1][j], m[i + 1][j + 1])
print(m[0][0])
