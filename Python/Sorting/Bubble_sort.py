def Bubble_sort(list1):
    for j in range(len(list1)):
        for i in range(len(list1)-1):
            if list1[i] > list1[i+1]:
                (list1[i],list1[i+1])=(list1[i+1],list1[i])
    return(list1)

list1=[1,3,2,4,5,23,4,2,4,0,43,2,4,5,3,66,]
print(Bubble_sort(list1))