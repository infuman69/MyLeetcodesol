//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        queue<pair<pair<int,int>,int>>  q;
        int countfresh = 0;
        vector<vector<int>> vis(n,vector<int> (m,0));
        for(int row = 0;row < n;row++){
            for(int col = 0;col < m;col++) {
                if(grid[row][col] == 2) {
                    q.push({{row,col},0});
                    vis[row][col] = 2;
                } else {
                    vis[row][col] = 0;
                }

                if(grid[row][col] == 1)
                    countfresh++;
            }
        }
        // row - 1 ,col  and row + 1 , col and row , col - 1 and row , col + 1
        int time = 0;
        int drow[] = {-1 , 1 , 0 , 0};
        int dcol[] = {0, 0 ,-1 , 1};
        int cnt = 0;

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int timetaken = q.front().second;
            time = max(time,timetaken);
            q.pop();
            for(int del = 0;del < 4;del++) {
                int nrow = r + drow[del];
                int ncol = c + dcol[del];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] != 2 && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0) {
                    q.push({{nrow,ncol},timetaken + 1});
                    vis[nrow][ncol] = 2;
                    cnt++;
                }
            }
        }

        if(cnt != countfresh) return -1;

        return time;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends