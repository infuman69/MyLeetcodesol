class Solution {
public:
    int countGoodSubstrings(string s) {
        int prev = 0,next = 0,count = 0;
        unordered_map<char,int> freq;
        while(prev < s.size() && next < s.size()){
            freq[s[next]]++;
            if(next - prev + 1 < 3)
                next++;
            else if(freq.size() == 3){
                count++;
                freq.erase(s[prev]);
                prev++;
                next++;
            }
            else {
                freq[s[prev]]--;
                if(freq[s[prev]] == 0)
                    freq.erase(s[prev]);
                prev++;
                next++;
            }
        }
        return count;
    }
};