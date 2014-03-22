//You are climbing a stair case. It takes n steps to reach to the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) return 0;
        
        int a = 0;
        int b = 1;
        int result = 0;
        
        for(int i = 0; i < n; i++) {
            result = a + b;
            a = b;
            b = result;
        }
        
        return result;
    }
};
