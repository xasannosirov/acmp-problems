k = int(input())
height = 0
while height * (height + 1) // 2 <= k:
    height += 1
print(height - 1)
