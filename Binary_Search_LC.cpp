/*
https://leetcode.com/problems/binary-search/description/

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int m = s + (e-s)/2;

        while(s <= e){
            if(target == nums[m])
                return m;
            
            if(target < nums[m]) 
                e = m-1;
            else
                s = m+1;
            
            m = s + (e-s)/2;
        }
        return -1;
    }
};