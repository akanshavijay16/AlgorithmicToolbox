#include<bits/stdc++.h>
using namespace std;
int majority(long long int a[],int n)
{
  sort(a,a+n);
  int count=1;
  int m=0;
  for(int i=1;i<n;i++)
  {
     if(a[i]==a[i-1])
        count++;
     else
     {
         if(count>n/2)
            return 1;
         count=1;
     }
  }
 if(count>n/2)
    return 1;
  else
  return 0;
}


int main()
{
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<majority(a,n)<<endl;
return 0;
}
