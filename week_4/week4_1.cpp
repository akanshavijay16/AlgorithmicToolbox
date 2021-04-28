#include<iostream>
using namespace std;
int binary(long long a[],int l,int r,long long e)
{
if(r<l)
return -1;
int mid=(l+r)/2;
if(a[mid]==e)
return mid;
if(a[mid]>e)
return binary(a,l,mid-1,e);
else
return binary(a,mid+1,r,e);
}
int main()
{
int n;
cin>>n;
long long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int k;
cin>>k;
long long b[k];
for(int i=0;i<k;i++)
cin>>b[i];
for(int i=0;i<k;i++)
cout<<binary(a,0,n-1,b[i])<<" ";
}
