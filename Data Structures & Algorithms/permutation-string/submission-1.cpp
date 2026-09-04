class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> count(26);

        int l = 0;
        int r = s1.length()-1;
        vector<int> window(26);
        for(int i =0; i<s1.length(); i++) count[s1[i]-'a']++;
        for(int i = l; i <=r; i++) window[s2[i]-'a']++;
        while(r<s2.length()){
            if(count == window) return true;//this is O(26 )everytime
            else{

                window[s2[l]-'a']--;
                l++;
                r++;
                if(r<s2.length())
                    window[s2[r]-'a']++;
            }
        }
        return false;
    }
};
