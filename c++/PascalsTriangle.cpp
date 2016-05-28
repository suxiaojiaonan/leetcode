//Given numRows, generate the first numRows of Pascal's triangle.

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > result;
        if(numRows == 0) return result;
        vector<int> tmp;
        tmp.push_back(1);
        result.push_back(tmp);
        
        for(int i = 1; i < numRows; i++) {
            tmp.clear();
            tmp.push_back(1);
            vector<int> pre = result[i-1];
            for(int j = 1; j < i; j++) {
                tmp.push_back(pre[j-1] + pre[j]);
            }
            tmp.push_back(1);
            result.push_back(tmp);
        }
        
        return result;
    }
};
