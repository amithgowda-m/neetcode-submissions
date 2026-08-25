class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sw;
        int l = 0, r = 0, count = 0;
        while (r < s.length()) {
            while (sw.find(s[r]) != sw.end()) {
                sw.erase(s[l++]); 
            }
            sw.insert(s[r++]);
            count = max(count, r - l); 
        }
        return count;
    }
};
