class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>v(numRows);

        for(auto i=0;i<numRows;i++){
            v[i].resize(i+1);
            for(auto j=0;j<i+1;j++){
                if(j==0 || j==i)
                    v[i][j]=1;
                else
                    v[i][j]=v[i-1][j] + v[i-1][j-1];
            }
        }
        return v;
    }
};