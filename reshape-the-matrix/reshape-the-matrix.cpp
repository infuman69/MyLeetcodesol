class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         int size = (mat.size())*(mat[0].size());
        if(size == r*c)
        {

            vector<vector<int>> reshape;
            int i,j,k = 0 , l = 0;
            for(i = 0;i < r;i++)
            {    vector<int> v;
                for(j=0;j < c;j++)
                {   if(l+1>mat[0].size())
                    {
                        k++;
                        l = 0;
                    }
                    v.push_back(mat[k][l++]);
                }
                reshape.push_back(v);
            }
            return reshape;
        }
        else
        {
            return mat;
        }
    }
};