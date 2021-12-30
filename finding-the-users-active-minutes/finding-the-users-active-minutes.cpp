class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        int i;
        vector<int>res(k,0);
        map<int,set<int>> mp;
        for(vector<int>temp:logs){
            mp[temp[0]].insert(temp[1]);
        }
        for(auto it:mp)
        {
            if(it.second.size()<=k)
                res[it.second.size()-1]++;
        }
        return res;
    }
};