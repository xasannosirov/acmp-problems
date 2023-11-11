k = int(input())
 
b = 0
a = 0
 
for i in range(6):
    if i < 3:
        a += k%10
    else:
        b += k%10
    k //=10
 
if a == b:
    print("YES")
else:
    print("NO")
