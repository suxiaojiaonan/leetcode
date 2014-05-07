//A robot is located at the top-left corner of a m x n grid 
//(marked 'Start' in the diagram below).
//The robot can only move either down or right at any point in time. 
//The robot is trying to reach the bottom-right corner of the grid 
//(marked 'Finish' in the diagram below).
//How many possible unique paths are there?

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> map(m+1, 0);
        map[1]=1;
        for(int i=0; i<n; i++){
            for(int j=1; j<=m; j++)
                map[j] = map[j-1]+map[j];
        }
        return map[m];
    }
};
