#include<iostream>
using namespace std;
int main()
{
int d,m,n;
cin>>d>>m>>n;
int stops[n+2];
stops[0]=0;
stops[n+1]=d;
for(int i=1;i<n+1;i++)
cin>>stops[i];
int cr=0,lr=0,r=0;
while(cr<=n)
{
lr=cr;
while(stops[cr+1]-stops[lr]<=m && cr<=n)
cr++;
if(cr==lr)
break;
if(cr<=n)
r++;
}
if(cr==lr)
    cout<<"-1";
else
cout<<r;
}
