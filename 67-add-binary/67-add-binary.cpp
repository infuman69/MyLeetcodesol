class Solution {
public:
    string addBinary(string a, string b) {
        int noofzeroes = 0,carry= 0,i;
        string res;
        if(a.size()>b.size())
        {
            noofzeroes = a.size()-b.size();
            while(noofzeroes > 0)
            {
                b = '0'+ b;
                noofzeroes--;
            }
        }
        else if(a.size()<b.size())
        {
            noofzeroes = b.size()-a.size();
            while(noofzeroes > 0)
            {
                a = '0' + a;
                noofzeroes--;
            }   
        }
        for(i = a.size()-1 ;i >= 0;i--)
        {
            if(a[i]!=b[i])
            {   if(!carry)
                {   res = '1' + res;
                }
                else
                {
                    res = '0' + res;
                    carry = 1;
                }
            }
            else if(a[i] == b[i])
            {
                if(a[i]=='1')
                {
                    if(!carry)
                        res = '0'+res;
                    else
                        res = '1'+res;
                    carry = 1;
                }
                else {
                    if(!carry)
                    {res = '0'+res;
                    
                    }
                    else
                    {
                        res = '1'+res;
                        carry = 0;
                    }
                }
            }
            
        }
        if(carry)
                res = '1' + res;
            return res;
        
    }
};