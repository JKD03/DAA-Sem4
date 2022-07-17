//Heap sort
#include <bits/stdc++.h>
using namespace std;

void maxheapify(int arr[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && arr[l]<arr[largest])
	largest=l;
	if(r<n && arr[r]<arr[largest])
	largest=r;
	
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
		maxheapify(arr,n,largest);
	}
}

void heapsort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	maxheapify(arr,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		maxheapify(arr,i,0);
	}
}

void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main()
{
	int arr[]={1,2,5,6,3,9,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"\nThe array before sorting is ";
	print(arr,n);
	heapsort(arr,n);
	//sort(arr,arr+n);
	cout<<"\nArray after sorting is ";
	print(arr,n);
	return 0;
}

