#241.Different Ways to Add Parantheses
class Solution {
public:
    int add (int value1, int value2) {
        return value1 + value2;
    }
    int sub (int value1, int value2) {
        return value1 - value2;
    }
    int mul (int value1, int value2) {
        return value1 * value2;
    }
    vector<int> diffWaysToCompute(string input) {
        vector<int> ans;
        for (int i = 0; i < input.size(); i++) {
            char op = input[i];
            if (op == '+' || op == '-' || op == '*') {
                auto left = diffWaysToCompute(input.substr(0, i));
                auto right = diffWaysToCompute(input.substr(i+1));
                for (int l: left) {
                    for (int r: right) {
                        if (op == '+')
                            ans.push_back(add(l, r));
                        else if (op == '-')
                            ans.push_back(sub(l, r));
                        else 
                            ans.push_back(mul(l, r));
                    }
                }
            }
        }
        if (ans.empty())
            ans.push_back(atoi(input.c_str()));
        return ans;
    }
};
