class Solution {
public:
    int go(int i,int j,vector <vector <int> >& dp)
    {   if(i>=j)
        {
            return 1;
        }
        if(dp[i][j]!=-1)
                return dp[i][j];
        else
        {
            int ans=0;
            for(int k=i;k<=j;k++)
            {
                ans=ans+go(i,k-1,dp)*go(k+1,j,dp);
            }
            dp[i][j]=ans;
            return ans;
        }
    }
    int numTrees(int n) {
        vector <vector <int> >dp;
        dp.resize(n+1,vector <int>(n+1,-1));
        return go(1,n,dp);
    }
};
