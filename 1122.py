k1, k2 = map(int, input().split())
l1, l2 = map(int, input().split())
 
if (k2-l2) == 0 and abs(k1-l1) == 1 or (k1-l1) == 0 and abs(k2-l2) == 1 or abs(k1-l1) == 1 and abs(k2-l2) == 1:
    print("YES")
else: 
    print("NO")
