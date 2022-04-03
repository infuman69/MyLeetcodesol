class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0,j = s.size() - 1,count = 0;
        while(i < j){
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else {
                count++;
                i++;
            }
            if(count > 1)
                break;
        }
        i = 0,j = s.size() - 1;
        int count1 = 0;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                count1++;
                j--;
            }
            if(count1 > 1)
                break;
        }
        if(count1 == 1|| count == 1)
            return true;
        if(count1 == 0|| count == 0)
            return true;
        
        return false;
        
    }
};