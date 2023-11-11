n = input()
 
if n[4] == 'x' and n[1] == "+":
    print(int(n[0])+int(n[2]))
elif n[4] == 'x' and n[1] == '-':
    print(int(n[0])-int(n[2]))
elif n[0] == 'x' and n[1] == "+":
    print(int(n[4]) - int(n[2]))
elif n[0] == 'x' and n[1] == '-':
    print(int(n[4])+int(n[2]))
elif n[2] == 'x' and n[1] == '+':
    print(int(n[4]) - int(n[0]))
elif n[2] == 'x' and n[1] == '-':
    print((int(n[4]) - int(n[0]))*-1)
