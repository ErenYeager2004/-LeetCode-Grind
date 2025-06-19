class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high && nums[low]!=target)
        {
            low++;
        }
        while(high>=low && nums[high]!=target){
            high--;
        }

        if(low>high){
            return {-1,-1};
        }
        if(nums.empty()){
            return {-1,-1};
        }
        
        return {low,high};
    }
};