class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
         sort(boxTypes.begin(), boxTypes.end(), [](auto& box1, auto& box2) {
            return box1[1] > box2[1];
        });
        int units = 0;
        for(auto x:boxTypes){
            
            if(x[0] <= truckSize)
                units += x[0]*x[1];
            else{
                if(truckSize == 0)
                    break;
                else{
                    units += truckSize*x[1];
                    truckSize -= truckSize;
                    continue;
                }
            }
            
            truckSize -= x[0];
        }
        return units;
    }
};