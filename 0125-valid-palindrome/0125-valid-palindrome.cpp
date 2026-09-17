class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                t +=tolower(s[i]);
            }
        }
        for(int i=0; i<t.size()/2; i++){
            if(t[i] != t[t.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};