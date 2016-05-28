class Solution {
public:
    void sortColors(int A[], int n) {
        if(n == 0) return;
        
        int r = -1;
        int w = -1;
        int b = -1;
        
        for(int i = 0; i < n; i++) {
            if(A[i] == 0) {
                A[++b] = 2;
                A[++w] = 1;
                A[++r] = 0;
            } else if(A[i] == 1) {
                A[++b] = 2;
                A[++w] = 1;
            } else if(A[i] == 2){
                A[++b] = 2;
            }
        }
        
        return;
        
    }
};
