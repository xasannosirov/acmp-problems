n = int(input())
 
newList = list()
for i in range(n):
    newList.append(input().split())
 
for i in range(len(newList)):
    newList[i][0] = int(newList[i][0])
    newList[i][1] = int(newList[i][1])
 
max_count = 0
max = 0
count = 1
for i in newList:
    if i[1] == 1 and i[0] > max:
        max_count = count
        max = i[0]
    count += 1
 
if max == 0:
    print(-1)
else:
    print(max_count)
