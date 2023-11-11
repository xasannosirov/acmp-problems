n = int(input())
 
numbers = input().split()
 
for i in range(n):
    numbers[i] = int(numbers[i])
 
max_summa = 0
for i in range(n//2):
    max_summa += max(numbers)
    numbers.remove(max(numbers))
 
mod_suma = sum(numbers)
 
print(max_summa - mod_suma)
