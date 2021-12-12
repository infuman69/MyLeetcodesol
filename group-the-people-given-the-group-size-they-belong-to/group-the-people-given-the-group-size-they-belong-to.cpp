class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes)
    {
        vector<vector<int>>res;
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i < groupSizes.size();i++)
        {
                if(mp[groupSizes[i]].size()>0)
                    mp[groupSizes[i]].push_back(i);
                else
                    mp[groupSizes[i]]={i};
                if(mp[groupSizes[i]].size()==groupSizes[i])
                {
                    res.push_back(mp[groupSizes[i]]);
                    mp.erase(groupSizes[i]);
                }
        }
        return res;
        
    }
};