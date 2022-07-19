class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        int i,j;
        for(i = 0;i < numRows;i++){
            vector<int> temp;            
            if(i == 0)
                temp.push_back(1);
            else {
                temp.push_back(1);
                for(j = 1;j <= i - 1;j++){
                    temp.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
                }
                temp.push_back(1);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};