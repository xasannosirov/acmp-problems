l, w, h = map(int, input().split())
area = 2 * (l * h + w * h)
print((area + 15) // 16)
