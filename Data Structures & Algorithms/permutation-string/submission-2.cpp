class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> count(26, 0), window(26, 0);

        for (char c : s1)
            count[c - 'a']++;

        int k = s1.size();

        for (int i = 0; i < k; i++)
            window[s2[i] - 'a']++;

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i] == window[i]) matches++;
        }

        int l = 0;
        for (int r = k; r < s2.size(); r++) {

            if (matches == 26) return true;

    
            int in = s2[r] - 'a';
            if (window[in] == count[in]) matches--; 
            window[in]++;
            if (window[in] == count[in]) matches++;  

            int out = s2[l] - 'a';
            if (window[out] == count[out]) matches--; 
            window[out]--;
            if (window[out] == count[out]) matches++; 

            l++;
        }

        return matches == 26;
    }
};