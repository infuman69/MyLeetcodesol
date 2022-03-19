class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int p = piles.size()-2,q = 0,ans = 0;
        while(p>q){
            ans+=piles[p];
            p-=2;
            q++;
        }
        return ans;
    }
};