class Solution {
public:
    int maxPower(string s) 
    {  
        int i,x = 0,max = 0;
        for( i = 0 ;i < s.size();i++)
        {
            if(s[i]==s[i+1])
               x++;
            else
                x = 0;
            if(max<x)
                max = x;
            
        }
        max++;
        return max;
    }
};
