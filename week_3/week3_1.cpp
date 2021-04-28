#include<iostream>
using namespace std;
int main()
{
int m;
cin>>m;
int c=0;
if(m>=10){
c=m/10;
m=m%10;
}
c=c+(m/5)+(m%5);
cout<<c;
}
