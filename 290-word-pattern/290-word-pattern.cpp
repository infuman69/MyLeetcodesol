class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp;
        stringstream ss(s);
        vector<string> vs;
        string word;
        while(ss>>word)
            vs.push_back(word);
        if(pattern.size()!=vs.size())
            return false;
        map<char,string> c2s;
        map<string,char> s2c;
        int i;
        for(i = 0;i < vs.size();i++)
        {
            if(c2s[pattern[i]]==""&&s2c[vs[i]]==0)
            {
                c2s[pattern[i]]=vs[i];
                s2c[vs[i]]=pattern[i];
                continue;
            }
            if(s2c[vs[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};