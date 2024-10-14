c = 0
N = 50
for x1 in range(0, N+1):
    for y1 in range(0, N+1):
        for x2 in range(0, N+1):
            for y2 in range(0, N+1):
                if not (x1*y2 - y1*x2 == 0):
                    if x1*x2 + y1*y2 == 0 or x1*(x1-x2)+y1*(y1-y2)==0 or x2*(x2-x1)+y2*(y2-y1)==0:
                        c+=1


print(c//2)
