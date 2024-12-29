def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # Return the index if element is found
    return -1  # Return -1 if element is not found

arr = [10, 20, 30, 40, 50]
target = 30
result = linear_search(arr, target)

if result != -1:
    print(f"Element {target} found at index {result}")
else:
    print("Element not found")


print("The output based on method: ", arr.index(target))