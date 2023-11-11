n = input()
 
j = ''
for i in range(len(n)):
    if i == 0 or i == len(n):
        j += n[i]
    else:
        j += '#' + n[i]
print(j)
