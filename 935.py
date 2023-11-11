k = input().split()
 
for i in range(4):
    k[i] = int(k[i])
 
if (k[0] + k[2]) % 2 == 0 and (k[1] + k[3]) % 2 == 0 or (k[0] + k[2]) % 2 == 1 and (k[1] + k[3]) % 2 == 1:
    print("YES")
else:
    print("NO")
