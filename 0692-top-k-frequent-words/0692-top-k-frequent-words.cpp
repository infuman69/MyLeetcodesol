
class Solution {
public:
    struct comparator {
        bool operator() (pair<int, string> a, pair<int, string> b) {
            if(a.first == b.first)
                return a.second > b.second;
            else
                return a.first < b.first;
        }
    };
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        
        for(auto word:words)
            freq[word]++;
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,comparator> freq_queue;
        
        for(auto p : freq)
            freq_queue.push({p.second,p.first});
        
        vector<string> ans;
        while(k--){
            ans.push_back(freq_queue.top().second);
            freq_queue.pop();
        }
        
        return ans;
    }
};