class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) return "";
        vector<int> targetFreq(128, 0);
        for (char c : t) {
            targetFreq[c]++;
        }

        int required = 0;
        for (int count : targetFreq) {
            if (count > 0) required++;
        }

        vector<int> windowFreq(128, 0);
        int formed = 0; 

        int left = 0;
        int minLen = INT_MAX;
        int startIdx = 0;

        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            windowFreq[c]++;

            if (targetFreq[c] > 0 && windowFreq[c] == targetFreq[c]) {
                formed++;
            }

            while (left <= right && formed == required) {
                int curLen = right - left + 1;
                if (curLen < minLen) {
                    minLen = curLen;
                    startIdx = left;
                }

                char leftChar = s[left];
                windowFreq[leftChar]--;

                if (targetFreq[leftChar] > 0 && windowFreq[leftChar] < targetFreq[leftChar]) {
                    formed--;
                }

                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
    }
};