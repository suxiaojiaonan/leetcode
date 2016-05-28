//Given an array and a value, remove all instances of that value in place and return the new length.


class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n == 0) return 0;
        int length = 0;
        for(int i = 0; i < n; i++) {
            if(A[i] != elem) {
                A[length] = A[i];
                length++;
            }
        }
        return length;
    }
};
