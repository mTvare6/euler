with open("0022_names.txt") as f:
    data = f.read().split('\n')[:-1]

s = 0
for i, name in enumerate(data, start=1):
    for j in name:
        s += i*(ord(j)-64)
print(s)

