#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;


#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;


int numSquares(int n) {
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        vector <int> v;
        for(int i=1;i*1ll*i<=n;i++)
        {
            dp[i*i]=1;
            v.push_back(i*i);
            //cout<<i<<'\n';
        }
        dp[0]=0;
        for(int i=2;i<n+1;i++)
        {   //dp[i]=INT_MAX;
            int ans=INT_MAX;
            for(int j=0;j<v.size();j++)
            {   //cout<<v[j]<<" ";
                if(i>=v[j])
                    ans=min(ans,dp[v[j]]+dp[i-v[j]]);
            }
            dp[i]=ans;
        }
        // for(int i=0;i<13;i++)
        //     cout<<dp[i]<<" ";
        //cout<<dp[8]<<" "<<dp[4]<<'\n';
        return dp[n];
int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif    
  int t=1;
  //cin>>t;
  while(t--){
    int nums;
    cin>>nums;
    cout<<numSquares(nums);

  }



return 0;
}
