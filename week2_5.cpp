#include<iostream>
using namespace std;
int main()
{
long long n;
int m;
cin>>n>>m;


int fib[10000];
fib[0]=0;
fib[1]=1;
int i=2;
while(true)
{
fib[i]=(fib[i-1]+fib[i-2])%m;

if(fib[i]==1 && fib[i-1]==0)
break;
i++;
}

int r=n%(i-1);
cout<<fib[r];
}
