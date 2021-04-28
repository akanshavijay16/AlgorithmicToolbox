#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int a[100000]={0};
    int i=0;
    while(n>0)
    {
        i++;
        if(i>n)
        {
            i--;
            a[i-1]+=n;
            break;
        }
        else
        {
            n=n-i;
            a[i-1]=i;
        }

    }
    cout<<i<<endl;
    for(int j=0;j<i;j++)
        cout<<a[j]<<" ";
}
