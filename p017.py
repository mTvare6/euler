# TODO: not done, cheated with a lib


ONE   = 3
TWO   = 3
THREE = 5
FOUR  = 4
FIVE  = 4
SIX   = 3
SEVEN = 5
EIGHT = 5
NINE  = 4

n = [0, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE]

TWENTY  = 6
THIRTY  = 6
FORTY   = 5
FIFTY   = 5
SIXTY   = 5
SEVENTY = 7
EIGHTY  = 6
NINETY  = 6

HUNDRED =7

m = [0, 0, TWENTY, THIRTY, FORTY, FIFTY, SIXTY, SEVENTY, EIGHTY, NINETY]

s = 11


j = 10*sum([i for i in m]) + 9*sum([i for i in n]) + sum([3, 6, 6, 8, 8, 7, 7, 9, 8, 8])

s+=10*j
s+=100*(sum([i for i in n]) + 9*HUNDRED) + 99*9*3
print(s)

