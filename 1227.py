n, k = map(int, input().split())
 
surat = 1
maxraj = 1
qavs = 1
one = n
two = k
three = n-k
 
while one > 0:
    surat *= one
    one -= 1
while two > 0:
    maxraj *= two
    two-=1
while three > 0:
    qavs *= three
    three-=1
maxraj = maxraj*qavs
print(surat//maxraj)
