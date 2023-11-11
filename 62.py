k = input()
b = int(k[1])
a = ord(k[0])
 
summa = 0
 
if 66 <= a + b and 80 >= a + b:
    summa += a + b
    if summa % 2:
        print("WHITE")
    elif summa % 2 == 0:
        print("BLACK")
