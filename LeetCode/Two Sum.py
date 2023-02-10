nums = list(map(int, input().split()))
arr2 = []
target = int(input())
for i in range(len(nums)):
    for j in range(len(nums)):
        if (nums[i] + nums[j] == target):
            arr2.append(i)
            arr2.append(j)
            break
    if(len(arr2)==2):
        break
print(arr2)
