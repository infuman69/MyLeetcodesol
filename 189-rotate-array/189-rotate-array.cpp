class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy;
        if(nums.size() == 1)
            return ;
        int i;
        if(k>nums.size())
        {     
            k=(k-nums.size())%nums.size();
        }
                    
        for(i = nums.size()-k;i < nums.size();i++)
        {
            copy.push_back(nums[i]);
        }
        for(i = 0;i<nums.size()-k;i++)
        {
            copy.push_back(nums[i]);
        }
        nums = copy;
    }
};