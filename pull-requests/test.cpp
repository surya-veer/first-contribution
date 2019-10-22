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


string fractionToDecimal(int numerator, int denominator) {
        unordered_map <long long,int> vis;
        long long  x=__gcd(abs((long long)numerator),abs((long long)denominator));
        long long int n=abs((long long )numerator)/x;
        long long int d=abs((long long )denominator)/x;
        long long  re=n%d;
        string ans=to_string(n/d);
        if((numerator>0 && denominator<0 )||(numerator<0 && denominator>0 ))
        ans="-"+ans;
        if(re==0)
        {
            return ans;
        }
        if(re!=0)
            ans+=".";
        //vis[re]=1;
        string t1;
        x=0;
        while(re!=0)
        {   long long  c1=0;
            while(re<d)
            {
                vis[re]=x;
                re*=10;
                ++c1;++x;
            }
            for(int i=1;i<c1;i++)
            {
                t1+="0";
            }
            long long temp=re%d;
            t1+=to_string(re/d);
            re=temp;
            if(vis.find(re)!=vis.end())
            {t1+=")";
             t1.insert(vis[re],"(");
             break;}
        }
        
            //return "-"+ans+t1;
        return ans+t1;
}
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
    int nums,demo;
    cin>>nums>>demo;
    cout<<fractionToDecimal(nums,demo);

  }



return 0;
}g99 