import math

nums = list(map(int, input().split()))
 
num = int(math.sqrt(nums[0]*nums[1]))
 
if num*num == nums[0]*nums[1]:
    print(num)
else:
    print(0)
