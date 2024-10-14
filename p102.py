with open("./0102_triangles.txt") as f:
    data = f.read().split("\n")[:-1]


from dataclasses import dataclass


@dataclass
class Vec:
    x: int
    y: int


def cross(a: Vec, b: Vec) -> int:
    return a.x * b.y - a.y * b.x


def sub(a: Vec, b: Vec) -> Vec:
    return Vec(a.x - b.x, a.y - b.y)


n = 0
for l in data:
    e = [int(h) for h in l.split(",")]
    z1 = Vec(e[0], e[1])
    z2 = Vec(e[2], e[3])
    z3 = Vec(e[4], e[5])

    i = cross(sub(z1, z2), z1)
    j = cross(sub(z2, z3), z2)
    k = cross(sub(z3, z1), z3)

    if i*j > 0 and k*j > 0:
        print(z1, z2, z3)

