class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> x,y;
        for(auto i:s){
            if(i == '#' && !x.empty())
                x.pop();
            else if(i == '#'&& x.empty())
                continue;
            else
                x.push(i);
        }
        for(auto j:t){
            if(j == '#' && !y.empty())
                y.pop();
            else if(j == '#'&& y.empty())
                continue;
            else
                y.push(j);
        }
        return x == y;
    }
};