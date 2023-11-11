a = int(input())
 
i = 1
summa = 0
while i <= a:
    if a % i == 0:
        summa+=i 
    i+=1
print(summa)
