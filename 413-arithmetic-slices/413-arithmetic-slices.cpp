class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       if(nums.size()<3)
           return 0;
       int diff,prevc = nums[1]-nums[0],ind = 0,i,count = 0;
        for(i = 1;i < nums.size()-1;i++)
        {
            diff = nums[i+1]-nums[i];
            if(diff == prevc)
                ind++;
            else
            {
                prevc = diff;
                ind = 0;
            }
            count+=ind;
        }
        return count;
    }
};