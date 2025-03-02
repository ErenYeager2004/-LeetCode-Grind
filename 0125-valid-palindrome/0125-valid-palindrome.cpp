class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char ch:s){
            if(isalnum(ch)){
                result+=tolower(ch);
            }
        }
        string reversed=result;
        reverse(reversed.begin(),reversed.end());
        return result==reversed;
    }
};