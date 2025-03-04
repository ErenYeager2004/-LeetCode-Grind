class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>map;

        if(s.length()!=t.length())
            return false;

        for(char c: s){
            map[c]++;
        }

        for(char c: t){
            map[c]--;
        }

        for(auto& it : map){
            if(it.second!=0){
                return false;
                break;
            }
        }

        return true;
    }
};