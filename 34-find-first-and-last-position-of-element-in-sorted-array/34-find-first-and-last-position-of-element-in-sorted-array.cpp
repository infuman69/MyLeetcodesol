class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0,r = nums.size() - 1,ansl = -1,ansr = -1,m;
        while(l <= r){
            m = (l + r)/2;
            if(nums[m] == target){
                r = m - 1;
                ansl = m;
            }
            else if(nums[m]<target){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        l = 0;
        r = nums.size() - 1;
        while(l <= r){
             m = (l + r)/2;
            if(nums[m] == target){
                l = m + 1;
                ansr = m;
            }
            else if(nums[m]<target){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        vector<int> pos;
        
        pos.push_back(ansl);
        
        pos.push_back(ansr);
        
        return pos;
    }
};