class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        sort(nums.begin(),nums.end());
        int i,elem;
        if(nums[0]!=nums[1])
            return nums[0];
        else if(nums[nums.size()-1]!=nums[nums.size()-2])
            return nums[nums.size()-1];
        for(i = 1;i < nums.size()-1;i++)
        {
            if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])
            {
                elem = nums[i];
                break;
            }
        }
        
        return elem;
        
    }
};