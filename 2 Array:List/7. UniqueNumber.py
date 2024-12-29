def unique(arr):
    count_dict = {}
    for num in arr:
        if num in count_dict:
            count_dict[num] += 1
        else:
            count_dict[num] = 1

    for num, count in count_dict.items():
        if count == 1:
            unique_elements = num
    print(unique_elements)


arr = [1,2,3,4,1,2,3]
unique(arr)


