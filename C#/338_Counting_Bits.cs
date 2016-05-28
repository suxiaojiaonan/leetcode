//https://leetcode.com/problems/counting-bits/
//Given a non negative integer number num. 
//For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation 
//return them as an array.

public class Solution {
    public int[] CountBits(int num) {
        int[] result = new int[num + 1];
        result[0] = 0;
        if (num <= 0) return result;
        result[1] = 1;
        if (num <= 1)
        {
            return result;
        }
        
         result[2] = 1;
        
        if (num <=2)
        {
            return result;
        }
        
        for (int i = 3; i <= num; i++)
        {
            if(i % 2 == 0) 
            {
                result[i] = result[i / 2];
            }
            else
            {
                result[i] = result[i / 2] + 1;
            }
        }
        
        return result;
    }
}