/*
https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count = 0;

        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] < nums[i])
                    count++;
                
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};