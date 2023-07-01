/*
https://leetcode.com/problems/max-consecutive-ones/description/

Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0)
                count = 0;
            else
                count++;
                maxi = max(count,maxi);
        }
        return maxi;
    }
};