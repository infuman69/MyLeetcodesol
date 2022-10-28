class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> grp;
        for(int i = 0;i < strs.size();i++){
            string temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            grp[strs[i]].push_back(temp);
        }
        for(auto i:grp)
            ans.push_back(i.second);
        return ans;
    }
};