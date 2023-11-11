n = int(input())
newList = list()
for i in range(n):
    newList.append(int(input()))
gerb = newList.count(0)
som = newList.count(1)
print(min(gerb,som))
