//Reverse digits of an integer.
//Example1: x = 123, return 321
//Example2: x = -123, return -321

class Solution {
public:
    int reverse(int x) {
        int neg = 0;
        if(x < 0) {
            neg = 1;
            x = -x;
        }
        unsigned int ret = 0;
        
        while(x / 10) {
            ret = ret * 10 + x % 10;
            x = x / 10;
        }
        
        ret = ret * 10 + x;
        if(ret > UINT_MAX) return 0;
        if(neg) {
            return -ret;
        } else {
            return ret;
        }
    }
};
