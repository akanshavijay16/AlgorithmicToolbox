#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,n;
    cin>>w>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    int** dp = new int* [n+1];

   for (int i = 0; i <=n; i++) {
    dp[i] = new int[w+1];
   }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<w+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<w+1;j++)
        {
            if(v[i-1]<=j)
                dp[i][j]=max(v[i-1]+dp[i-1][j-v[i-1]],dp[i-1][j]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}
