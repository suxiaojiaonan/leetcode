//https://leetcode.com/problems/add-digits
// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
public class Solution {
    public int AddDigits(int num) {
        return (num - 1) % 9 + 1;
    }
}