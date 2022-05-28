class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,s = 0,maxi = -1;
        if(nums.size() == 1 && nums[0] == 1)
            return 0;
        for(i = 0;i < nums.size();i++)
        {
            s += nums[i];
            maxi = max(maxi,nums[i]);
        }
        
        int sn = maxi*(maxi + 1)/2;
        
        if(sn == s)
        {
            if(maxi == nums.size())
                return 0;
            else 
                return nums.size();
        }
        else
            return sn - s;
    }
};