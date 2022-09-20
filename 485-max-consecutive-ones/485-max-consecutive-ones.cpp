class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0,size = nums.size(),count = 0,maxone = 0;
        for(i = 0;i < size ;i++){
            if(nums[i] == 1){
                count++;
                maxone = max(maxone,count);
            }
            else
                count = 0;
        }
        return maxone;
    }
};