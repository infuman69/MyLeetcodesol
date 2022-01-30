class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int i,count = 0;
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]&&n)
                return false;
            else
                return true;
        }
        
        for(i = 0; i < flowerbed.size() ;i++)
        {
            if(flowerbed[i]==0)
            {  
                if((i == 0||flowerbed[i-1]==0)&&(i==flowerbed.size()-1||flowerbed[i+1]==0))
                { count++;
                 i++;
                }
            }
            
        }
        return n<=count; 
    }
};