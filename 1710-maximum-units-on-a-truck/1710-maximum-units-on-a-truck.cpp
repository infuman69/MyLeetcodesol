class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
         sort(boxTypes.begin(), boxTypes.end(), [](auto& box1, auto& box2) {
            return box1[1] > box2[1];
        });
        int units = 0;
        for(auto x:boxTypes){
            int num = min(truckSize,x[0]);
            units += num*x[1];
            truckSize -= num;
        }
        return units;
    }
};