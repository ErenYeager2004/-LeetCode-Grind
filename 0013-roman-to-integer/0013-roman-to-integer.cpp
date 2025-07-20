class Solution {
public:
    int romanToInt(string s) {
        map<char,int>table;
        table['I'] = 1;
        table['V'] = 5;
        table['X'] = 10;
        table['L'] = 50;
        table['C'] = 100;
        table['D'] = 500;
        table['M'] = 1000;
        int prev = 0;
        int total = 0;
        
        for(int i=s.size()-1;i>=0;i--){
            int curr = table[s[i]];
            if(curr < prev){
                total-=curr;
            }else{
                total+=curr;
            }
            prev = curr;
        }

        return total;

    }
};