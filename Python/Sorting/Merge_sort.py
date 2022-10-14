def mergesort(llst):
    if len(llst)<=1:
        return llst
    
    mid = len(llst)//2
    Left = llst[:mid]
    right = llst[mid:]
    Left = mergesort(Left)
    right = mergesort(right)
    return merge_two_sort (Left,right)


def merge_two_sort (a,b):
    i=j=0
    NEWlst=[]
    while i < len(a) and j<len(b):
        if a[i]>=b[j]:
            NEWlst.append(b[j])
            j+=1
        else:
            NEWlst.append(a[i])
            i+=1
    while j<len(b):
        NEWlst.append(b[j])
        j+=1
    while i<len(a):
        NEWlst.append(b[i])
        i+=1
    return NEWlst
# a=[1,2,4,55]
# b=[3,4,33,44,57,66]
llst=[1,3,2,4,5,23,0,3,66]
print(mergesort(llst))