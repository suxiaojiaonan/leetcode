
//Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        if(n == 0) return 0;
        
        for(int i = 0; i < n; i ++) {
            if(target > A[i]) continue;
            if(target <= A[i]) {
                return i;
            }
        }
        
        return n;
    }
};
