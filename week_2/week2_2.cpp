#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
n=n%60;
int fib[n+1];
fib[0]=0;
fib[1]=1;
for(int i=2;i<n+1;i++)
fib[i]=(fib[i-1]+fib[i-2])%10;
cout<<fib[n];
}
