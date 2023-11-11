k1, k2 = map(int, input().split())
l1, l2 = map(int, input().split())
 
if l1 - k1 == l2 - k2:
    print("YES")
elif (l1-k1) * -1 == l2-k2:
    print("YES")
elif l1 - k1 == (l2-k2 * -1):
    print("YES")
elif (l1-k1) * -1 == (l2-k2) * -1:
    print("YES")
else:
    print("NO")
