class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s;
        vector<int> ans;
        for(int i = 0;i < nums.size() - 1;i++){
            if(nums[i] == nums[i + 1]){
                ans.push_back(nums[i]);
            }
            
        }
        for(auto num:nums)
            s.insert(num);
        int repeatedSum = 0;
        for(auto x:s){
            repeatedSum += x;
        }
        int length = nums.size();
        int sum = (length*(length + 1))/2;
        cout<<sum<<" "<<repeatedSum;
        int repeatedNum = sum - repeatedSum;
        ans.push_back(repeatedNum);
        
        return ans;
    }
};