k1, k2 = map(int, input().split())
l1, l2 = map(int, input().split())
 
if k1 == l1 or k2 == l2:
    print("YES")
elif abs(l1-k1) == abs(l2-k2):
    print("YES")
else:
    print("NO")
