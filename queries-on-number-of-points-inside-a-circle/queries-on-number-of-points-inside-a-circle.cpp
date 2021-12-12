class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    { int count = 0 ,x1,y1,x2,y2,r;
        vector<int> ans;
     int i,j;
     for(i=0;i<queries.size();i++)
     {   count = 0;
         x1 = queries[i][0],y1 = queries[i][1],r = queries[i][2];
         for(j = 0;j<points.size();j++)
         {
             x2 = points[j][0], y2 = points[j][1];
             if((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)<=r*r)
                 count++;
         }
        ans.push_back(count);
     }
     return ans;
        
    }
};