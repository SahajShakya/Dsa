list = [1,2,3,-1,20,100,23]
maximum = 0
for i in range(0, len(list)):
    if(list[i]>maximum):
        maximum = list[i]

print("The max number is: ", maximum)
print("The max number is: ", max(list))

