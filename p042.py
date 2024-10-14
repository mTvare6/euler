with open("./0042_words.txt") as f:
    m = eval( f'[{f.read()}]')

k = [(lambda w:sum ([ (ord(l)-64) for l in w ]))(word) for word in m]
h = [(lambda x:x*(x+1)//2)(i) for i in range(1, 20)]
print(sum([1 if g in h else 0 for g in k]))

