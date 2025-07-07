class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        int subsets = 1 << arr.size();  // 2^n subsets
        vector<vector<int>> ans;

        for (int i = 0; i < subsets; i++) {
                vector<int> temp;
            for (int j = 0; j < arr.size(); j++) {
                if (i & (1 << j)) {
                    temp.push_back(arr[j]);
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};