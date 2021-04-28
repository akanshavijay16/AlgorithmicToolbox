#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val[3]={1,3,4};
    int dp[3][n+1]={0};
    int l;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=n;j++)
        {
            l=INT_MAX;
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=0;
            else
            {
               for(int k=0;k<=i;k++)
                l=min(l,dp[k][j-val[k]]);
                dp[i][j]=1+l;
            }


        }

    }

    cout<<dp[2][n];
}
