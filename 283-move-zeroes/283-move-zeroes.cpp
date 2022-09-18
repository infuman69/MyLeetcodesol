class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> copy;
        for(auto num:nums){
            if(num != 0)
                copy.push_back(num);
        }
        for(auto num:nums){
            if(num == 0)
                copy.push_back(num);
        }
        nums = copy;
    }
};