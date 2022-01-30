class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int max = arr[0],maxpos = -1,i;
        bool checkfirsthalf = false,checksecondhalf=false;
        for(i = 0;i < arr.size();i++)
        {
            if(max<arr[i])
            {    max = arr[i];
                 maxpos = i;
            }
        }
        if(maxpos == 0||maxpos == (arr.size())-1||arr[0] == max || arr[arr.size()-1]==max)
            return false;
        for(i = 0;i < maxpos;i++)
        {
            if(arr[i]<arr[i+1])
                checkfirsthalf = true;
            else{
                checkfirsthalf = false;
                break;
            }
        }
        for(i = maxpos+1;i<arr.size();i++)
        {
            if(arr[i-1]>arr[i])
                checksecondhalf = true;
            else{
                checksecondhalf = false;
                break;
            }
        }
        if(checkfirsthalf && checksecondhalf)
            return true;
        else 
            return false;
        
    }
};