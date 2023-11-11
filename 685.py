k = input().split() 
  
for i in range(6):
    k[i] = int(k[i])
 
max_narx = k[0]
 
if k[1] > max_narx:
    max_narx = k[1]
 
if k[2] > max_narx:
    max_narx = k[2]
 
min_narx = k[0]
 
if k[1] < min_narx:
    min_narx = k[1]
 
if k[2] < min_narx:
    min_narx = k[2]
 
med_narx = k[0] + k[1] + k[2] - max_narx - min_narx
 
max_box = k[3]
 
if k[4] > max_box:
    max_box = k[4]
 
if k[5] > max_box:
    max_box = k[5]
 
min_box = k[3]
 
if k[4] < min_box:
    min_box = k[4]
 
if k[5] < min_box:
    min_box = k[5]
 
med_box = k[3] + k[4] + k[5] - max_box - min_box
 
natija = (max_narx*max_box)+(med_narx*med_box)+(min_narx*min_box);
 
print(natija)
