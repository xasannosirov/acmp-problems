a = int(input())
 
summa = 0
if a > 0:
    i = 1
    while i <= a:
        summa += i
        i+=1
    print(summa)
else:
    i = a
    while i <= 1:
        summa += i
        i+=1
    print(summa)
