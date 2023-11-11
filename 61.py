one = input().split()
two = input().split()
three = input().split()
four = input().split()
 
for i in range(2):
    one[i] = int(one[i])
for i in range(2):
    two[i] = int(two[i])
for i in range(2):
    three[i] = int(three[i])
for i in range(2):
    four[i] = int(four[i])
 
game_one = one[0] + two[0] + three[0] + four[0]
game_two = one[1] + two[1] + three[1] + four[1]
 
if game_one > game_two:
    print(1)
elif game_one < game_two:
    print(2)
else:
    print("DRAW")
