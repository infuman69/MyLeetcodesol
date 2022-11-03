class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int result = 0;
        for(string word:words){
            string s = word;
            reverse(s.begin(),s.end());
            if(mp[s] > 0){
                result += 4;
                mp[s]--;
            } else {
                mp[word]++;
            }
        }
        
        for(auto i:mp){
            if(i.first[0] == i.first[1] && i.second >0)
                return result + 2;
        }
        
        return result;
    }
};