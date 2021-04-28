#include<iostream>
using namespace std;
int sum(long long n)
{
n=n%60;
int fib[n+1];
fib[0]=0;
fib[1]=1;
int sum=0;
if(n==1)
sum=1;
if(n>1){
sum=1;
for(int i=2;i<n+1;i++)
{
fib[i]=(fib[i-1]+fib[i-2])%10;
sum=(sum+fib[i])%10;
}
}

return sum;
}
int main()
{
long long n,m;
cin>>m>>n;
int a=sum(n);
int b=sum(m-1);
if(a<b)
a+=10;

int c=(a-b)%10;

cout<<c;
}
