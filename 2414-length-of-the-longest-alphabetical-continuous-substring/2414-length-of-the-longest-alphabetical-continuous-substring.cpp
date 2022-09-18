class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i = 0,count = 1,max_length=INT_MIN;
        for(int j = i + 1;j < s.size();j++){
            if(s[j] - s[i] == 1){
                count++;
            }
            else{
                if(max_length < count)
                    max_length = count;
                count = 1;
            }
            i++;
        }
        return max(count,max_length);
    }
};