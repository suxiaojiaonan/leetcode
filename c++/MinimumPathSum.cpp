class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        if(grid.size() == 0) {
            return 0;
        } 
        
        if(grid[0].size() == 0) {
            return 0;
        }
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> temp(m+1, INT_MAX);
        temp[1] = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(temp[j + 1] < temp[j]) {
                    temp[j+1] += grid[i][j];
                } else {
                    temp[j+1] = temp[j] + grid[i][j];
                }
            }
        }
        
        return temp.back();
    }
};
