numbers = list(map(int, input().split()))
 
if numbers[0] + numbers[1] == numbers[2]:
    print("YES")
elif numbers[0] + numbers[2] == numbers[1]:
    print("YES")
elif numbers[1] + numbers[2] == numbers[0]:
    print("YES")
elif numbers[1] + numbers[0] == numbers[2]:
    print("YES")
elif numbers[2] + numbers[1] == numbers[0]:
    print("YES")
elif numbers[2] + numbers[0] == numbers[1]:
    print("YES")
else:
    print("NO")
