int climbStairs(int n) {
    int dp[n+1];
    memset(dp,-1,sizeof(dp));

    for(int i=0;i<=1;i++){
        dp[i] = 1;
    }

    for(int i=2;i<=n;i++){
        dp[i] =  dp[i-1] + dp[i-2];
    }

    return dp[n];
}