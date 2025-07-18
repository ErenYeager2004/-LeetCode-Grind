class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int ans = 0;
        for(int i:nums){
            mpp[i]++;
        }

        for(auto& it:mpp){
            if(it.second > 1){
                ans = it.first;
            }
        }

        return ans;
    }
};