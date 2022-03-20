class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int> freq1,freq2;
        int i,maxno1 = INT_MIN,maxno2 = INT_MIN,max1 = 0,max2 = 0,c = 0;
        for(i = 0;i < tops.size();i++){
            freq1[tops[i]]++;
            freq2[bottoms[i]]++;
        }
        for(auto itr = freq1.begin();itr!=freq1.end();itr++){
            if(maxno1 < itr->second){
                maxno1 = itr->second;
                max1 = itr->first;
            }
        }
        for(auto itr = freq2.begin();itr!=freq2.end();itr++){
            if(maxno2 < itr->second){
                maxno2 = itr->second; 
                max2 = itr->first;
            }
        }
        cout<<max1<<maxno1;
        if(maxno1 >= maxno2){
          
            for(i = 0; i < tops.size();i++)
            {
                if(tops[i]!=bottoms[i]&&bottoms[i] == max1)
                    c++;
            }
            if(c!=tops.size()-maxno1)
                c = -1;
            
        }
        else {
            for(i = 0; i < bottoms.size();i++)
            {
                if(bottoms[i]!=tops[i]&&tops[i] == max2)
                    c++;
            }
            if(c!=bottoms.size()-maxno2)
                c = -1;
        }
        return c;
    }
};