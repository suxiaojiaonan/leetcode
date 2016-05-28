//Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

class Solution {
public:
    int maxSubArray(int A[], int n) {
        if(n == 0) return 0;
        int max = A[0];
        int sum = A[0];
        for(int i = 1; i < n; i ++) {
            sum = sum + A[i];
            if(A[i] > sum) {
                sum = A[i];
            }
            if(sum > max) {
                max = sum;
            }
            
        }
        
        return max;
        
    }
};
