n = int(input())
 
newList = list(map(int, input().split()))
 
musbat = 0
for i in newList:
    if i > 0:
        musbat += i
     
max = newList.index(max(newList))
min = newList.index(min(newList))
 
if min > max:
    temp = min
    min = max
    max = temp
 
kop = 1
while min+1 < max:
    kop *= newList[min+1]
    min += 1
 
print(musbat, kop)
