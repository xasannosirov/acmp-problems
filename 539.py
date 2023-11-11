a = int(input())
  
if a % 2 == 0 and a > 0:
    print(a//2)
elif a == 0:
    print(0)
elif a % 2 != 0 and a > 1:
    print(a)
 
elif a % 2 != 0 and a == 1:
    print(0)
