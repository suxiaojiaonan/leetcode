class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int s = 0;
        int e = rows * cols - 1;
        
        while(s<=e) {
            int m = s+(e-s)/2;
            if(target == matrix[m/cols][m%cols]) {
                return true;
            } else if(target < matrix[m/cols][m%cols]) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        
        return false;
    }
};
