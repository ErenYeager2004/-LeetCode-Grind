class Solution {
    public static int maxSumNonAdjacent(int idx ,int[]arr,int[]dp){
        if(idx == 0) return arr[idx];
        if(idx < 0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = arr[idx] + maxSumNonAdjacent(idx-2,arr,dp);
        int notPick = maxSumNonAdjacent(idx - 1, arr,dp);
        return dp[idx] = Math.max(pick,notPick);
    }
    public int rob(int[] nums) {
       int idx = nums.length;
       int[]dp = new int[idx];
       Arrays.fill(dp,-1);
       return maxSumNonAdjacent(idx-1,nums,dp);
       
    }
}