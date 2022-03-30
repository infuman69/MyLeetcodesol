class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int i ,j;
       
     for(auto& it :matrix)
     {
         int low = 0;
         int high = it.size()-1;
         
         while(low<=high)
         {    int mid = (low + high)/2;;
             if(target == it[mid])
             {
                 return true;
             }
             else if(target<it[mid])
             {
                 high=mid-1;
                }
             else{
                 low=mid+1;
             }
         }
     }
     return false;
    }
};