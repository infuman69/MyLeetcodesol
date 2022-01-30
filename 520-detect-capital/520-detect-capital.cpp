class Solution {
public:
    bool checkcaps(char s)
    {
        return s>='A'&&s<='Z';
    }
    bool detectCapitalUse(string word) {
         int caps = 0 , notcaps = 0,i;
        for(i = 1 ;i < word.size();i++)
        {
            if(word[i]>='A'&&word[i]<='Z')
                caps++;
            else if(word[i]>='a'&&word[i]<='z')
                notcaps++;
        }
        if(checkcaps(word[0])&&(caps == word.size()-1||notcaps == word.size()-1))
            return true;
        else if (!checkcaps(word[0])&&notcaps==word.size()-1)
            return true;
        return false;
    }
};