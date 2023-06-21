/*
https://leetcode.com/problems/search-insert-position/description/

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int m = s + (e-s)/2;

        while(s <= e){
            if(nums[m] == target)
                return m;
            
            if(nums[m] < target)
                s = m + 1;
            else
                e = m - 1;

            m = s + (e-s)/2;    
        }
        return m;
    }
};