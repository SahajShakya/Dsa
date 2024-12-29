def changeArr(arr):
    # Pass by reference (mutable object - list)
    for i in range(len(arr)):
        arr[i] = 2 * arr[i]

arr = [1, 2, 3]
changeArr(arr)  # Modifies the original list
for num in arr:
    print(num)
