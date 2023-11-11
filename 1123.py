k1, k2 = map(int, input().split())
l1, l2 = map(int, input().split())
 
if (k1+2) == l1 or (k1-2) == l1 or (k2+2) == l2 or (k2-2) == l2:
    print("YES")
else: 
    print("NO")
