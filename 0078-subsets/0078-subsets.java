class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>>ans = new ArrayList<>();
        int n = 1 << nums.length;
        for(int i=0;i<n;i++){
            List<Integer>temp = new ArrayList<>();
            for(int j=0;j<nums.length;j++){
                if((i & (1<<j))==0){
                    temp.add(nums[j]);
                }
            }
            ans.add(temp);
        }

        return ans;
    }
}