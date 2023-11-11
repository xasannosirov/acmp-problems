numbers = input().split()
x = int(numbers[0])
y = int(numbers[1])
z = int(numbers[2])
 
print("Impossible") if x+y-z < 0 else print(x+y-z)
