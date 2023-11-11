def tub(number):
    if number <= 2:
        return True if number == 2 else False
     
    if number % 2 == 0:
        return False
 
    j = 3
    while j * j <= number:
        if number % j == 0:
            return False
        j+=2
    return True
 
a = int(input())
 
i = 2
while i <= a:
    if tub(i) and tub(a-i):
        print(f"{i} {a-i}")
        break
    i+=1
