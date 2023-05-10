//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,vector<vector<int>>& visited,int colorOfStaringPixel,int delrow[],int delcol[]){
        int n = image.size() , m = image[0].size();
        image[sr][sc] = color;
        for(int i = 0 ;i < 4;i++) {
            int nrow = sr + delrow[i];
            int ncol = sc + delcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == colorOfStaringPixel && visited[nrow][ncol] == 0) {
                visited[nrow][ncol] = 1;
                dfs(image, nrow, ncol, color, visited, colorOfStaringPixel, delrow, delcol);
            }
        }
       
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();
        int colorOfStaringPixel = image[sr][sc];
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int delrow [] = {0,0,1,-1};
        int delcol [] = {1,-1,0,0};
        dfs(image, sr, sc, color, visited,colorOfStaringPixel,delrow,delcol);
        return image; 
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends