s, p = map(int, input().split()) 
x = (s + (s * s - 4 * p) ** 0.5) / 2 
print(int(min(x, s - x)),int(max(x, s - x)))
