//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if( n == 0 ) return 0;
        
        int ind = 1;
        int cur = 1;

        while (cur < n) {
            if (A[cur] != A[cur-1]) {
                A[ind++] = A[cur];
            }
            ++cur;
        }

        return ind;
    }
};
