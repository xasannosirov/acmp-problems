def gcd(a, b):
    while b:
        a, b = b, a%b
    return a

n = input().split()
a = int(n[0])
b = int(n[1])
print(gcd(a,b))
