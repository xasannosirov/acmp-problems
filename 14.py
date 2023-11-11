def compute_gcd(x, y):
   while(y):
       x, y = y, x % y
   return x
 
def compute_lcm(x, y):
   lcm = (x*y)//compute_gcd(x,y)
   return lcm
 
n = input().split()
num1 = int(n[0])
num2 = int(n[1])
 
print(compute_lcm(num1, num2))
