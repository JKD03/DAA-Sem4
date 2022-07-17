#include <bits/stdc++.h>
using namespace std;

void activity_sel(int s[], int f[],int n)
{
	int i=0;
	cout<<"the sequnece in which activity would be selectes \n";
	cout<<i<<" ";
	for(int j=1;j<n;j++)
	{
		if(s[j]>=f[i])
		{
			cout<<j<<" ";
			i=j;
		}
	}
}

int main()
{
	int n;
	int s[]={1,2,4,7,3,9,7};
	int f[]={2,3,7,9,5,7,1};
	/*
	int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    */
	n=sizeof(s)/sizeof(s[0]);
	activity_sel(s,f,n);

}
