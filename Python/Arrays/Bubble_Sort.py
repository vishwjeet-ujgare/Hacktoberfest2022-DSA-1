# python program to sort an array by bubble sort
def bubbleSort(list):
    length = len(list)
    # traversing in arr 
    for i in range(length):
        for j in range(0, length - i - 1):
            # swapping the elements if the found element is greater than the adjacent element
            if list[j] > list[j + 1]:
                list[j], list[j + 1] = list[j + 1], list[j]


# sample array
list = [88,33,66,44,22,11,99,55,77]
print("Unsorted List : ", list)

# sorting the array by bubble sort
bubbleSort(list)

print("Sorted List : ", list)