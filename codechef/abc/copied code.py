'''Python program to find maximum value of Sum(i*arr[i])'''


# returns max possible value of Sum(i*arr[i])
def maxSum(arr):
    # stores sum of arr[i]
    arrSum = 0

    # stores sum of i*arr[i]
    currVal = 0

    n = len(arr)

    for i in range(0, n):
        arrSum = arrSum + arr[i]
        currVal = currVal + (i * arr[i])

    # initialize result
    maxVal = currVal

    # try all rotations one by one and find the maximum
    # rotation sum
    for j in range(1, n):
        currVal = currVal + arrSum - n * arr[n - j]
        if currVal > maxVal:
            maxVal = currVal

    # return result
    return maxVal


# test maxsum(arr) function
arr = [10, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print
"Max sum is: ", maxSum(arr)
