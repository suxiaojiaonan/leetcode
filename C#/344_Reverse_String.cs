//https://leetcode.com/problems/reverse-string/
//Write a function that takes a string as input and returns the string reversed

public class Solution {
    public string ReverseString(string s) {
        if(s == null) return null;
        char[] array = s.ToCharArray();
        Array.Reverse(array);
        return new String(array);
    }
}