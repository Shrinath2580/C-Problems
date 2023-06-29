/*
https://leetcode.com/problems/first-missing-positive/description/

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.
*/

#include<bits.stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int count = 1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == count)
                count++;
            
        }
        return count;
    }
};