def sum(arr):
    sum = 0
    for i in arr:
        sum = sum + arr[i-1]
    return sum

def mul(arr):
    product = 1
    for i in arr:
        product = product * arr[i-1]
    return product

arr = [1,2,3,4]

print(sum(arr))
print(mul(arr))

