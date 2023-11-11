n = int(input())
 
newList = list()
for i in range(n):
    newList.append(input().split())
 
for i in range(len(newList)):
    newList[i][0] = int(newList[i][0])
    newList[i][1] = int(newList[i][1])
 
for i in newList:
    print(19*i[1] + (i[0] + 239) * (i[0] + 366) // 2)
