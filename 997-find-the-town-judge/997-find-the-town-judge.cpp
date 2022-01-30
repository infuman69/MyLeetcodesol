class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> score(n+1,0);
            int i;
            for(i = 0; i < trust.size();i++)
            {
                score[trust[i][0]]--;
                score[trust[i][1]]++;
            }
            for(i = 1;i <=n;i++)
            {
                if(score[i]==n-1)
                    return i;
            }
        return -1;
    }
};