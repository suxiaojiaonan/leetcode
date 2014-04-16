class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        if(n == 0) {
            result.push_back(0);
            return result;
        }
        
        vector<int> temp;
        temp = grayCode(n-1);
        result = temp;
        int number = 1 << (n-1);
        int length = temp.size();
        for(int i = length - 1; i >= 0; i--) {
            result.push_back(temp[i] + number);
        }
        
        return result;
    }
};
