def reverse_array(arr):
    left=0
    temp=0
    right=len(arr)-1
    while(left!=right):
        temp = arr[left]
        arr[left] = arr[right]
        arr[right] = temp
        left = left + 1
        right = right - 1


arr = [1,2,3,4,5]
reverse_array(arr)


# for i in range(0, len(arr)):
#     print (arr[i])

print(arr)