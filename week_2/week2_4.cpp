#include<iostream>
using namespace std;
int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
int main()
{
int a,b;
cin>>a>>b;
long long l=((long long)a)*((long long)b);
int g=gcd(a,b);
l=l/g;
cout<<l;
}
