class Solution {
public:
    bool isPalindrome(string& str, int l, int r){
        while(l<r){
            if(str[l++]!=str[r--]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size()/2;
        int i =0,j=s.size()-1;

        while(n--){
            if(s[i]!=s[j]){
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
            i++;j--;
        }
        return true;
    }
};