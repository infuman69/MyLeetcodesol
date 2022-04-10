class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        int s = 0,i;
        for(i = 0;i < ops.size();i++){
            if(ops[i]=="+"){
                record.push_back(record[record.size()-1]+record[record.size()-2]);
            }
            else if(ops[i] == "C"){
                record.erase(record.begin()+record.size()-1);
            }
            else if(ops[i] == "D"){
                record.push_back(2*record[record.size() - 1]);
            }
            else {
                record.push_back(stoi(ops[i]));
            }
        }
        for(auto num:record)
            s+=num;
        return s;
    }
};