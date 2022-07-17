def binarysearch(arr,beg,end,key):
    if beg<=end:
        mid=(beg+end)//2
        if arr[mid]==key:
            return mid+1
        elif arr[mid]<key:
            return binarysearch(arr, mid+1, end, key)
        else:
            return binarysearch(arr, beg, mid-1, key)
    else:
        return -1

arr=[2,3,4,5,6,7]
n=len(arr)
key=int(input("Enter element to find(must be integer type) :- "))

posi=binarysearch(arr,0,n-1,key)

if posi==-1:
    print('{} is not present in the list'.format(key))
else:
    print('{} is present at position {} in the list'.format(key,posi))
            