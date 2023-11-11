x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())

if (x1 == x2) and (1 <= x1 <= 8):
    if (y1 == 2) and ((y2 == y1+1) or (y2 == y1+2)):
        print("YES")
    elif (y1 > 2) and (y2 == y1+1):
        print("YES")
    else:
        print("NO")
else:
    print("NO")
