a = input()
b = input()
c = input()
 
if a[0] == 'b' and b[0] == 'b' and c[0] == 'g':
    print("black\nblack\nGREEN", end = "")
elif a[0] == 'b' and b[0] == 'b' and c[0] == 'G':
    print("black\nyellow\nblack", end = "")
elif a[0] == 'b' and b[0] == 'y' and c[0] == 'b':
    print("red\nblack\nblack", end = "")
elif a[0] == 'r' and b[0] == 'b' and c[0] == 'b':
    print("red\nyellow\nblack", end = "")
elif a[0] == 'r' and b[0] == 'y' and c[0] == 'b':
    print("black\nblack\ngreen",end = "")
elif a[0] == 'b' and b[0] == 'Y' and c[0] == 'b':
    print("black\nYELLOW\nblack", end = "")
elif a[0] == 'R' and b[0] == 'b' and c[0] == 'b':
    print("RED\nblack\nblack", end = "")
elif a[0] == 'b' and b[0] == 'b' and c[0] == 'G':
    print("black\nblack\nGREEN", end = "")
elif a[0] == 'r' and b[0] == 'y' and c[0] == 'g':
    print("error")
else:
    print("error\n")
