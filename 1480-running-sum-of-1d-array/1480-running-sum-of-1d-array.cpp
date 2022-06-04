class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rSum;
        int s = 0;
        for(auto i:nums)
        {
            s += i;
            rSum.push_back(s);
        }
        return rSum;
    }
};