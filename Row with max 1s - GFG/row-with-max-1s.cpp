//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i,j,max = 0,rowIndex = -1;
	    
	    for(i = 0;i < n;i++) {
	        int countRow = 0;
	        for(j = 0;j < m;j++) {
	            if(arr[i][j] == 1)
	                countRow++;
	        } 
	        if(max < countRow) { 
	            max = countRow;
	            rowIndex = i;
	        }
	    }
	    
	    return rowIndex;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends