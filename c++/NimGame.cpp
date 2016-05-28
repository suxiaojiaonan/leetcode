// https://leetcode.com/problems/nim-game/
// To solve the problem of 292 Nim Game

class Solution {
public:
    bool canWinNim(int n) {
        if (n <= 0) return false;
        return (n % 4 == 0) ? false : true;
    }
};