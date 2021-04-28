#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    long long int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    cin>>l;
    long long int c[l];
    for(int i=0;i<l;i++)
        cin>>c[i];
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
    vector <int> res1;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(a[i-1]==b[j-1])
                {dp[i][j]=1+dp[i-1][j-1];
                res1.push_back(a[i-1]);
                }
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    int len=res1.size();
    int dp2[len+1][l+1];
    for(int i=0;i<len+1;i++)
    {
        for(int j=0;j<l+1;j++)
        {
            if(i==0 || j==0)
                dp2[i][j]=0;
        }
    }
    for(int i=1;i<len+1;i++)
    {
        for(int j=1;j<l+1;j++)
        {
            if(res1[i-1]==c[j-1])
                dp2[i][j]=1+dp2[i-1][j-1];


            else
                dp2[i][j]=max(dp2[i][j-1],dp2[i-1][j]);
        }
    }
    cout<<dp2[len][l];
    return 0;
}

