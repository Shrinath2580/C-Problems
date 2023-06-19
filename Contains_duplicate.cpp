/*
https://leetcode.com/problems/contains-duplicate/description/

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i+1<nums.size(); i++){
            if(nums[i] == nums[i+1]){
                return true;
                break;
            }
        }
        return false;
    }
};

