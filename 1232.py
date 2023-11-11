n, m = list(map(int, input().split()))
 
matrix = list()
for i in range(n):
    matrix.append(list(map(int, input().split())))
 
qatorlar = 0
for i in range(n):
    for j in range(m):
        qatorlar += matrix[i][j]
    print(qatorlar, end = " ")
    qatorlar = 0
 
print()
 
ustunlar = []
for i in range(m):
    ustunlar.append(0)
 
for i in range(n):
    for j in range(m):
        ustunlar[j] += matrix[i][j]
 
print(*ustunlar)
print()
for i in range(n):
    for j in range(m):
        print(matrix[i][j], end = " ")
    print()
