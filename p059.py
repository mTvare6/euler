from string import ascii_lowercase as seq
with open("./0059_cipher.txt") as f:
    m = [int(r) for r in f.read().split(',')]

for i in range(0, 26):
    for j in range(0, 26):
        for k in range(0, 26):
            e = [ord(seq[i]) , ord(seq[j]) , ord(seq[k])]
            id = 0
            s = ''
            for l in m:
                s+=chr(l^e[id])
                id+=1
                id%=3
            if 'perimeter' in s:
                print(seq[i]+seq[j]+seq[k])
                print(sum([ord(p) for p in s]))






