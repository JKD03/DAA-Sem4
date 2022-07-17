#include<bits/stdc++.h>
using namespace std;

struct item{
int wt;
int p;
float ratio;
};

bool compare3(struct item a, struct item b){
return a.ratio>b.ratio;
}
bool compare2(struct item a, struct item b){
return a.p>b.p;
}
bool compare1(struct item a, struct item b){
return a.wt<b.wt;
}

int main()
{
int n,i;
cout<<"Enter number of items :";
cin>>n;
item arr[n];
cout<<"Enter data \n";
for(i=0;i<n;i++){
cout<<"For item:"<<i+1<<endl;
cout<<"Weight:";cin>>arr[i].wt;
cout<<"Profit:";cin>>arr[i].p;
arr[i].ratio=(float)arr[i].p/arr[i].wt;
}

cout<<"\n\nGiven data \n";
for(i=0;i<n;i++){
cout<<"For item:"<<i+1<<"  ";
cout<<"Weight:"<<arr[i].wt;
cout<<",Profit:"<<arr[i].p;
cout<<" and Ratio:"<<arr[i].ratio<<endl;
}
int total;
cout<<"\n Enter weight of knapsack:";
cin>>total;

//Method 1 weights
int tot=total;
float p1=0;
int ie=0;
sort(arr,arr+n,compare1);
for(i=0;i<n;i++)
{
if(tot>=arr[i].wt)
{
tot=tot-arr[i].wt;
p1=p1+arr[i].p;
ie++;
}
else if(tot==0)
break;
else
{
float r=(float)(tot/arr[i].wt)*arr[i].p;
p1=p1+r;
ie++;
}
}
cout<<"Using Weight approach you got :"<<ie<<" items with total profit of "<<p1<<endl<<endl;

//Method 2 profits

tot=total;
ie=0;
float p2=0;
sort(arr,arr+n,compare2);
for(i=0;i<n;i++)
{
if(tot>=arr[i].wt)
{
tot=tot-arr[i].wt;
p2=p2+arr[i].p;
ie++;
}
else if(tot==0)
break;
else
{
float r=(float)(tot/arr[i].wt)*arr[i].p;
p2=p2+r;
ie++;
}
}
cout<<"Using Profits approach you got :"<<ie<<" items with total profit of "<<p2<<endl<<endl;

//Method 3 Ratios
tot=total;
ie=0;
float p3=0;
sort(arr,arr+n,compare3);
for(i=0;i<n;i++)
{
if(tot>=arr[i].wt)
{
tot=tot-arr[i].wt;
p3=p3+arr[i].p;
ie++;
}
else if(tot==0)
break;
else
{
float r=(float)(tot/arr[i].wt)*arr[i].p;
p3=p3+r;
ie++;
}
}
cout<<"Using Ratio approach you got :"<<ie<<" items with total profit of "<<p3<<endl<<endl;

return 0;
}