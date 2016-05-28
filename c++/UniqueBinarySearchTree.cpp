//Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
//This can be solved by the function of 卡特兰数
//wiki http://zh.wikipedia.org/wiki/卡塔兰数

class Solution {
public:
    int numTrees(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        int ret = ((4 * n - 2) * numTrees(n-1) ) / ( n + 1) ;
        return ret;
    }
};
