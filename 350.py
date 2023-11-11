from itertools import permutations
 
x = input()
for i in permutations(x):
    print("".join(i))
