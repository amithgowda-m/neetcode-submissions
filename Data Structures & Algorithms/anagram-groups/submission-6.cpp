class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> anagramMap;

        for(const string& str : strs){
            char count[26] ={0};
            for(char c : str){
                count[c-'a']++;
            }
            string key(count,26);
            anagramMap[key].push_back(str);

        }
        ans.reserve(anagramMap.size());
        for (const auto& pair : anagramMap) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
