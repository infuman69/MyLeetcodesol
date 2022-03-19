class Solution {
public:
    bool isValid(string s) {
        bool flag = true ;
        stack<char> st;
        int i ;
        if(s.size()==1)
            return false;
        for(i = 0;i < s.size();i++)
        {
            if(s[i] == '('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            if(s[i] == ')'||s[i]=='}'||s[i]==']')
            {
                if(st.empty())
                    flag = false;
                else {
                    string s1 ;
                    s1 = st.top();
                    st.pop();
                    if(s[i]==')'&&(s1[0]== '{'||s1[0] == '['))
                        flag = false;
                    else if(s[i] =='}'&&(s1[0]=='('||s1[0]=='['))
                        flag = false;
                    else if(s[i] ==']'&&(s1[0]=='('||s1[0]=='{'))
                        flag = false;
                }
            }
        }
        if(!st.empty())
            flag = false;
        return flag;
    }
};