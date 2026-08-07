class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> anagramMap;

        for(string str : strs){
            int count[26] ={0};
            for(char c : str){
                count[c-'a']++;
            }
            string key="";
            for(int k=0;k<26;k++){
                key+='#' + to_string(count[k]);
            }
            anagramMap[key].push_back(str);

        }

        for (auto pair : anagramMap) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
