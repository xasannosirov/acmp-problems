enter = input()
 
summa = 0
for i in range(len(enter)):
    if enter[i] == '>' and len(enter) > i+4:
        if(enter[i] == '>' and enter[i+1] == '>' and enter[i+2] == '-' and enter[i+3] == '-' and enter[i+4] == '>'):
            summa += 1
    if enter[i] == '<' and len(enter) > i+4:
        if(enter[i] == '<' and enter[i+1] == '-' and enter[i+2] == '-' and enter[i+3] == '<' and enter[i+4] == '<'):
            summa += 1
 
print(summa)
