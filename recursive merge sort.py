def mergesort(arr):
    if len(arr)>1:
        mid=len(arr)//2
        larray=arr[:mid]
        rarray=arr[mid:]
        print("Left array is ",larray)
        print("right array is",rarray)
        
        mergesort(larray)
        mergesort(rarray)
        
        i,j,k=0,0,0
        
        while i<len(larray) and j<len(rarray):
            if larray[i]<rarray[j]:
                arr[k]=larray[i]
                i+=1
            else:
                arr[k]=rarray[j]
                j+=1
            k+=1
        
        while i<len(larray):
            arr[k]=larray[i]
            i+=1
            k+=1
        while j<len(rarray):
            arr[k]=rarray[j]
            j+=1
            k+=1
    print("The array after merge is ",arr)
        
a=[10,30,60,25,43,98]
mergesort(a)
