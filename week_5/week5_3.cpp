#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int editDist(string a,string b,int n,int m)
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    if(dp[n][m]!=-1)
            return dp[n][m];
    if(a[n-1]==b[m-1])
        return dp[n][m]=editDist(a,b,n-1,m-1);
    else
        return dp[n][m]=1+min(editDist(a,b,n,m-1),min(editDist(a,b,n-1,m),editDist(a,b,n-1,m-1)));
}
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    memset(dp,-1,sizeof(dp));
    int n=a.length();
    int m=b.length();
    cout<<editDist(a,b,n,m);
}
