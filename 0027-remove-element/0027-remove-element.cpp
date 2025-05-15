class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int unique=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[unique]=nums[i];
                unique++;
            }
        }
        return unique;
    }
};