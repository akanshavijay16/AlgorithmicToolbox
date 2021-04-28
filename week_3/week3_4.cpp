#include<iostream>
using namespace std;
void sort(int* p,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(*(p+j)<*(p+j+1))
            {
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}
int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];

sort(a,n);
sort(b,n);
long long r=0;
for(int i=0;i<n;i++)
r+=((long long)a[i]*(long long)b[i]);
cout<<r;
}
