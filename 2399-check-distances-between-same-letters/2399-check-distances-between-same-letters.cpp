class Solution {
public:
    int distancechar(string s,char ch){
        int x1 = 0,x2 = 0;
        for(int i = 0;i < s.size();i++){
            if(ch == s[i])
            {
                x1 = i;
                break;
            }
        }
        
        for(int i = 0;i < s.size();i++){
            if(ch == s[i])
                x2 = i;
        }
        
        return x2 - x1 - 1;
    }
    bool checkDistances(string s, vector<int>& distance) {
        int i;
        for(i = 0;i < s.size();i++)
        {
            if(distance[s[i] - 'a'] != distancechar(s,s[i]))
                return false;
        }
        return true;
    }
};