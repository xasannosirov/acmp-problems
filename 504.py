def siljit(myStr):
    temp = ""
    temp += myStr[2] + myStr[0] + myStr[1]
    return temp
 
n = int(input())
myStr = 'GCV'
 
for i in range(n):
    myStr = siljit(myStr)
print(myStr)
