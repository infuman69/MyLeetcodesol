class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int i,size = arr.size(),c =0,s = 0;
        priority_queue<int> freq;
        unordered_map<int,int> mp;
        for (auto x : arr)
            mp[x]++;
        for (auto i : mp)
            freq.push(i.second);
        if(freq.size() == 1)
            return 1;
        while(!freq.empty()){
            s += freq.top();
            c++;
            freq.pop();
            if(s >= size/2)
                return c;
        }
        return 0;
    }
};