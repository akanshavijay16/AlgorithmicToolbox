#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> dp;
    dp.push_back(0);
    dp.push_back(0);
    int m;
    for(int i=2;i<=n;i++)
    {
        m=INT_MAX;
        if(i%2==0 && i/2>0)
            m=min(m,dp[i/2]);
        if(i%3==0 && i/3>0)
            m=min(m,dp[i/3]);
        m=min(m,dp[i-1]);
        dp.push_back(1+m);
    }
    cout<<dp[n]<<endl;

    int v=dp[n];
    vector<int> res;
    for(int i=dp.size()-1;i>=0;i--)
    {
        if(dp[i]==v)
        {
            res.push_back(i);
            v--;
        }
    }
    reverse(res.begin(),res.end());
      for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;





    return 0;
}
