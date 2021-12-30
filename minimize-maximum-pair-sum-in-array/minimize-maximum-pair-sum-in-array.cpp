class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> sums;
        int i;
        for(i = 0 ; i < nums.size()/2;i++)
        {
            int s = 0;
            s = nums[i]  + nums[nums.size()- i - 1];
            sums.push_back(s);
            
        }
        int max = sums[0];
        for(i = 0 ; i < sums.size(); i++)
        {
            if(max<sums[i])
                max = sums[i];
        }
        return max ;
        
        
    }
};