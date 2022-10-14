def insertionsort(list1):
    for j in range(len(list1)):
    
        while(j>0 and list1[j] < list1[j-1]):
                (list1[j-1],list1[j]) = (list1[j],list1[j-1])
                j=j-1
        
    return(list1)
list1=[1,3,2,4,5,23,4,2,4,0,43,2,4,5,3,66,]
print(insertionsort(list1))
