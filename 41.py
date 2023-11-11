n = int(input())
massalar = list()
massalar = input().split()
 
for i in range(len(massalar)):
    massalar[i] = int(massalar[i])
 
massalar.sort()
 
print(*massalar)
