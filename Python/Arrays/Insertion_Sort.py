# python program to sort an array by insertion sort
def insertion_sort(list1):
    for i in range(1, len(list1)):
        a = list1[i]
        j = i - 1
        while j >= 0 and a < list1[j]:
            list1[j + 1] = list1[j]
            j -= 1
        list1[j + 1] = a
    return list1

# sample array
list = [88, 33, 66, 44, 22, 11, 99, 55, 77]
print("Unsorted List : ", list)

# sorting the array by insertion sort
insertion_sort(list)

print("Sorted List : ", list)