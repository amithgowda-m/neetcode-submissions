class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto& s : strs){
            ans+=to_string(s.size())+'#'+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        int n = s.size();
        while(i<n){
            int j =i;
            while(s[j]!='#')j++;

            int length = stoi(s.substr(i,j-i));
            string str = s.substr(j+1,length);
            ans.push_back(str);
            i=1+j+length;
        }
        return ans;
        
    }
};
