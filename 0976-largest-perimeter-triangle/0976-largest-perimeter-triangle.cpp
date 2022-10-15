class Solution {
public:
    bool checkValidTriangle(vector<int>& nums){
        if(nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[0] + nums[2] > nums[1])
            return true;
        else
            return false;
    }
    int largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i = nums.size() - 3;i >= 0;i--){
           if(nums[i] + nums[i + 1] > nums[i + 2])
               return nums[i] + nums[i + 1] + nums[i + 2];
       }
       return 0;
    }
};