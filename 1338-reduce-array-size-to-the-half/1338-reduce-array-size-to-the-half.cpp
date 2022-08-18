class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int i,size = arr.size(),c =0,s = 0;
        vector<int> freq;
        unordered_map<int,int> mp;
        for (auto x : arr)
            mp[x]++;
        for (auto i : mp)
            freq.push_back(i.second);
        if(freq.size() == 1)
            return 1;
        sort(freq.begin(),freq.end());
        
        for(i = freq.size() - 1;i >=0 ;i--)
        {
            if(s >= size/2)
                return c;
            c++;
            s += freq[i];
        }
        
        return 0;
    }
};