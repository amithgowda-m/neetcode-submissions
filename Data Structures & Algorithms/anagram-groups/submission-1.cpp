class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> anagramMap;

        for(int i=0;i<strs.size();i++){
            int count[26] ={0};
            for(char c : strs[i]){
                count[c-'a']++;
            }
            string key="";
            for(int i=0;i<26;i++){
                key+='#' + count[i];
            }
            anagramMap[key].push_back(strs[i]);

        }

        for (auto pair : anagramMap) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
