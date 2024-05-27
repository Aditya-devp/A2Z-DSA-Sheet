class Solution{
    public:
    static const int MOD = 1e9 + 7;
   long long memo(int i,string&str,vector<vector<long long>>&dp,int n){
        if(i>n)return 0;
        if(i==n)return 1;
        if(dp[i][n]!=-1)return dp[i][n];
        if(str[i]==str[n]){
          dp[i][n]=  (1+memo(i+1,str,dp,n)+memo(i,str,dp,n-1))%MOD;
        }
        else{
          dp[i][n]= (memo(i+1,str,dp,n)+memo(i,str,dp,n-1)-memo(i+1,str,dp,n-1)+MOD)%MOD;
        }
        return dp[i][n];
        
    }
    int  countPS(string str)
    {
        int n=str.size();
        vector<vector< long long >>dp(n,vector< long long>(n+1,-1));
        
        dp[i][i]=1;
        return memo(0,str,dp,n-1);
       
    }
     
};
