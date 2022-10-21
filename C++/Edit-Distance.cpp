class Solution {
public:
    string a,b;
    int dp[600][600];
    int rec(int n,int m){
        if(n==0) return m;
        else if(m==0) return n;
        if(dp[n][m]!=-1) return dp[n][m];
        if(a[n-1]==b[m-1])
            return dp[n][m]=rec(n-1,m-1);
        else{
            int x,y,z;
            if(dp[n-1][m]!=-1) x=dp[n-1][m];
            else x=rec(n-1,m);
            
            if(dp[n][m-1]!=-1) y=dp[n][m-1];
            else y=rec(n,m-1);
            
            if(dp[n-1][m-1]!=-1) z=dp[n-1][m-1];
            else z=rec(n-1,m-1);
             
            return dp[n][m]=1+min({x,y,z});
        }
    }
    int minDistance(string word1, string word2) {
        a=word1,b=word2;
        memset(dp,-1,sizeof(dp));
        return rec(a.size(),b.size());
    }
};
