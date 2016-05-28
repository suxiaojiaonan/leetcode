//Given a non-negative number represented as an array of digits, plus one to the//number.

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> result;
        if(digits.size() == 0) {
            return result;
        }
        
        if(digits.size() == 1) {
            if(digits.back() < 9) {
                result.push_back(digits.back() + 1);
                return result;
            } else {
                result.push_back(1);
                result.push_back(0);
                return result;
            }
        } else {
            if(digits.back() < 9) {
                result = digits;
                result.pop_back();
                result.push_back(digits.back() + 1);
                return result;
            } else {
                digits.pop_back();
                result = plusOne(digits);
                result.push_back(0);
                return result;
            }
        }
    }
};
