def partition(arr, beg,end):
    i=beg-1
    pivot=arr[end]
    for j in range(beg,end):
        if arr[j]<=pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[end]=arr[end],arr[i+1]
    return (i+1)

def quicksort(arr,beg,end):
    if beg<end:
        pi=partition(arr,beg,end)
        quicksort(arr,beg,pi-1)
        quicksort(arr,pi+1,end)

arr=[4,2,9,3,6]
n=len(arr)
quicksort(arr,0,n-1)
for i in arr:
    print(i,end=" ")
    