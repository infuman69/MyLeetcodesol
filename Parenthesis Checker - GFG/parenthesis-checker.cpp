//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        bool isValid = true;
        stack<char> st;
        int i;
        for(i = 0;i < x.size();i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '[')
                st.push(x[i]);
            if(x[i] == ')' || x[i] == '}' || x[i] == ']') {
                
                if(st.empty())
                    isValid = false;
                else {
                    char s1 = st.top();
                    st.pop();
                    if(x[i] == ')' && (s1 == '{' || s1 == '['))
                        isValid = false;
                    else if (x[i] == '}' && (s1 == '(' || s1 == '['))
                        isValid = false;
                    else if (x[i] == ']' && (s1 == '(' || s1 == '{'))
                        isValid = false;
                }
            }
        }
        
        if(!st.empty())
            isValid = false;
        return isValid;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends