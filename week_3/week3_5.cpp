#include<iostream>
using namespace std;
void del(long long* x,long long* y,int i,int n)
{
   for(int j=i;j<n;j++)
   {
        *(x+j)=*(x+j+1);
        *(y+j)=*(y+j+1);
   }
}
int main()
{
    int n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    long long mrp[n]={0},min;
    int k=0;
    while(n>0)
    {
        min=b[0];

        for(int i=0;i<n;i++)
        {
            if(min>b[i])
                min=b[i];
        }
        mrp[k]=min;
        for(int i=0;i<n;)
        {
            if(a[i]<=mrp[k] && mrp[k]<=b[i])
            {
                del(a,b,i,n);
                n--;
            }
            else
                i++;
        }

        k++;
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++)
        cout<<mrp[i]<<" ";
}
