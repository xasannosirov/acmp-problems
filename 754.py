k = input().split() 
  
for i in range(3):
    k[i] = int(k[i])
 
max_number = k[0]
min_number = k[0]
  
if k[1] > max_number:
    max_number = k[1]
  
if k[2] > max_number:
    max_number = k[2]
  
if k[1] < min_number:
    min_number = k[1]
  
if k[2] < min_number:
    min_number = k[2]
      
if max_number <= 727 and min_number >= 94:
    print(max_number)
else:
    print("Error")
