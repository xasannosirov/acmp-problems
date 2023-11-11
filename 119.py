n = int(input())
 
newList = list()
for i in range(n):
    newList.append(input().split())
 
for i in range(len(newList)):
    newList[i][0] = int(newList[i][0])
    newList[i][1] = int(newList[i][1])
    newList[i][2] = int(newList[i][2])
 
newList = sorted(newList)
 
for i in newList:
    print(*i)
