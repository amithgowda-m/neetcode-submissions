class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> anagramMap;
        
        for(string str : strs){
            string key = str;
            sort(key.begin(),key.end());
            anagramMap[key].push_back(str);
        }

        for(auto pair : anagramMap){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
