class Solution {
public:
    bool validPalindrome(string s) {
        int count = 0;
        int n = s.size()/2;
        int i =0,j=(n*2)-1;

        while(n--){
            if(count>1) return false;
            if(s[i++]!=s[j--]) count++;
        }
        return true;
    }
};