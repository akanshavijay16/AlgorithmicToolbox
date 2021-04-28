#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int max1=-1;
for(int i=0;i<n;i++)
{
    if(max1==-1 || a[i]>a[max1])
        max1=i;
}
int max2=-1;
for(int i=0;i<n;i++)
{
    if((i!=max1)&&(max2==-1 || a[i]>a[max2]))
        max2=i;
}
long long res=((long long)a[max1])*a[max2];
cout<<res;

}
