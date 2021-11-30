class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,flag=0;
       vector<int> sum;
       for(i=0;i<nums.size();i++)
       {    
            for(j=i+1;j<nums.size();j++)
            {
                    if(nums[i]+nums[j]==target)
                    {     sum.push_back(i);
                          sum.push_back(j);
                     return  sum;
                    }
            }
        
            
       }
     return sum; 
        
    }
};