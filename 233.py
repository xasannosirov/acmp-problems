m = input().split()
 
xavf = 437
newList = list()
for i in m:
    newList.append(int(i))
 
count = 1
check = 0
for i in newList:
    if i == xavf or i < xavf:
        print(f"Crash {count}")
        check = 1
        break
    count += 1
 
if not check:
    print("No crash")
