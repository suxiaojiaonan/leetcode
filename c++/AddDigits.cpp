// The Solution for the problem of Add Digits
// https://leetcode.com/problems/add-digits/
// Please see this for the specific information of Digital Root
// https://en.wikipedia.org/wiki/Digital_root

class Solution {
public:
    int addDigits(int num) {
         if(num <= 0) return 0;
         return ((num - 1) % 9 + 1);
    }
};