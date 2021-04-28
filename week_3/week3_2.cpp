#include<iostream>
using namespace std;
void sorting(int* w,int* v,int n,double* d)
{
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
 if(*(d+j)<*(d+j+1))
  {
  int temp=*(w+j);
  *(w+j)=*(w+j+1);
  *(w+j+1)=temp;
  temp=*(v+j);
  *(v+j)=*(v+j+1);
  *(v+j+1)=temp;
  double t=*(d+j);
  *(d+j)=*(d+j+1);
  *(d+j+1)=t;

  }
}
}
}
int main()
{
int n,W;
cin>>n>>W;
int w[n],v[n];
double d[n]={0};
for(int i=0;i<n;i++){
cin>>v[i]>>w[i];
if(w[i]!=0)
d[i]=v[i]/w[i];
}
sorting(w,v,n,d);


long double f=0;
for(int i=0;i<n;i++)
{
if(W==0)
break;
int a=min(w[i],W);
f=f+((double)v[i]*((double)a/(double)w[i]));
w[i]-=a;
W-=a;
}
cout.precision(10);
cout<<f;
}
