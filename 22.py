n = int(input())
j = bin(n)[2:]
j = str(j)
 
summa = 0
for i in j:
    if i == '1':
        summa += 1
print(summa)
