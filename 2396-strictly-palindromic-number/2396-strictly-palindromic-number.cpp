class Solution {
public:
    bool checkpalindrome(string s){
        int n = s.size();
        for(int i = 0;i < s.size();i++){
            if(s[i] != s[n - i - 1])
                return false;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i = 2;i <= n - 2;i++){
            string s = "";
            int x = n;
            while(x > 0){
                int d = x % i;
                s = char(d) + s;
                x /= i;
            }
           if(!checkpalindrome(s))
               return false;
        }
        return true;
    }
};