class Solution {
public:
   
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> vec;
        vector<int> ans;
        int i;
        for(i = 0;i < mat.size();i++){
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            vec.push_back({cnt,i});
        }
        sort(vec.begin(),vec.end());
        for(auto i: vec)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            k--;
        }
        return ans ;
    }
};