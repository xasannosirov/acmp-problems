x, y, z = map(int, input().split())
print("YES" if x + y > z and x + z > y and y + z > x else "NO")
