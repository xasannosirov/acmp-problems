n = input().split()
 
n1 = int(n[0])
n2 = int(n[1])
 
if n2 <= n1 and n2 == 1:
    print(f"{n2} {n2}")
    exit(0)
 
if n2 <= n1 and n2 != 1:
    print(f"{1} {n2}")
    exit(0)
 
count = 1
while n2 > 0:
    if n2 - n1 > 0:
        count += 1
        n2 -= n1
    else:
        print(f"{count} {n2}")
        exit(0)
