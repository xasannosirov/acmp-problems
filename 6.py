enter = input()
 
if len(enter)!=5 or enter[2] != '-':
    print("ERROR")
    exit(0)
 
check = ['1','2','3','4','5','6','7','8','A','B','C','D','E','F','G','H','-']
for i in enter:
    if i not in check:
        print("ERROR")
        exit(0)
 
one, two = enter.split("-")
if len(enter)==5 and len(one)==2 and len(two)==2:
    if 65 <= ord(one[0]) <= 90 and 65 <= ord(two[0]) <= 90 and 48 <= ord(one[1]) <= 57 and 48 <= ord(two[1]) <= 57:
        if two[0] == chr(ord(one[0])-2) and (two[1] == chr(ord(one[1])-1) or two[1] == chr(ord(one[1])+1)):
                print("YES")
        elif two[0] == chr(ord(one[0])+1) and (two[1] == chr(ord(one[1])-2) or two[1] == chr(ord(one[1])+2)):
                print("YES")
        elif two[0] == chr(ord(one[0])+2) and (two[1] == chr(ord(one[1])-1) or two[1] == chr(ord(one[1])+1)):
                print("YES")
        elif two[0] == chr(ord(one[0])-1) and (two[1] == chr(ord(one[1])-2) or two[1] == chr(ord(one[1])+2)):
                print("YES")
        else:
            print("NO")
    else:
        print("ERROR")
        exit(0)
else:
    print("ERROR")
    exit(0)
