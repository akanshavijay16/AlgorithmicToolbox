#include<iostream>
#include<string.h>
using namespace std;
void del(int* x,int n,int ele)
{
    int i;
   for( i=0;i<n;i++)
    if(*(x+i)==ele)
    break;

   for(int j=i;j<n;j++)
   {
        *(x+j)=*(x+j+1);
   }
}
int mf(int a,int b)
{
    string one=""+a+b;
    string two=""+b+a;
    return (one>two)?a:b;
}
int maxno(int* x,int n)
{
    int max=*x;
    for(int i=0;i<n;i++)
    {
        max=mf(max,*(x+i));
    }
    del(x,n,max);
    return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    string f="";

    while(n>0)
    {
     string m=""+maxno(arr,n);
     f=f.append(m);
     n--;
    }
    cout<<f;
}
