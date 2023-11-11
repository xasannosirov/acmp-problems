n = int(input())
 
sum = 1
nums = list(map(int, input().split()))
for i in range(n):
    sum = sum+nums[i]-1
print(sum)
