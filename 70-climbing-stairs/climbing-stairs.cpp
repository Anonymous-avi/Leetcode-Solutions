class Solution {
    private:
    int recursion(int n,vector<int>&dp){
        if(n==0 ||n==1) return 1;
        if(dp[n]!=-1){
            return dp[n];
        }
        int left=recursion(n-1,dp);
        int right=recursion(n-2,dp);

        return dp[n]=left+right;
    }

public:
    int climbStairs(int n) {
       vector<int>dp(n+1,-1);
       return recursion(n,dp);
       


    }
};