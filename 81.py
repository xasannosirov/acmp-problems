n = int(input())
nums = input().split()
 
for i in range(n):
    nums[i] = int(nums[i])
 
max_number = nums[0]
min_number = nums[0]
 
i = 1
while i < n:
    if nums[i] > max_number:
        max_number = nums[i]
    if nums[i] < min_number:
        min_number = nums[i]
    i+=1
 
print(f"{min_number} {max_number}")
