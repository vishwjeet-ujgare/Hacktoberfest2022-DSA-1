# python program to sort an array by selection sort
def selectionSort(array, size):
	for s in range(size):
		min_idx = s
		for i in range(s + 1, size):
			if array[i] < array[min_idx]:
				min_idx = i

		# Arranging min at the correct position
		(array[s], array[min_idx]) = (array[min_idx], array[s])

# sample array
list = [88,33,66,44,22,11,99,55,77]
print("Unsorted List : ", list)

# sorting the array by bubble sort
size = len(list)
selectionSort(list, size)

print("Sorted List : ", list)