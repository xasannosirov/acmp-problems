k = input().split()

for i in range(3):
    k[i] = int(k[i])
  
if k[0] * k[1] == k[2]:
    print("YES")
else:
    print("NO")
