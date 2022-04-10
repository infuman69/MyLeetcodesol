class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int> s;
        int sum = 0;
        
        for (auto it : ops) {
            if (it == "C") {
                sum -= s.top();
                s.pop();
            } else if (it == "D") {
                s.push(s.top() * 2);
                sum += s.top();
            } else if (it == "+") {
                int value1 = s.top();
                s.pop();
                int value2 = s.top();
                s.push(value1);
                s.push(value1 + value2);
                sum += s.top();
            } else {
                s.push(stoi(it));
                sum += s.top();
            }
        }
        
        return sum;
    }
};