class Solution {
public:
    bool check(vector<int>& nums) {
        bool sorted = true;
        int n = nums.size();
        int count = 0;
        for(int i = 0;i < n - 1;i++){
            if(nums[i] > nums[i + 1]){
                count++;
                if(nums[n - 1] > nums[0])
                    return false;
            }
        }
        if(count > 1)
            return false;
        else
            return true;
    }
};