/*
https://leetcode.com/problems/permutations-ii/description/

Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void recursion(vector<int> nums, int i, int j, vector<vector<int>>& ans){
        if(i == j-1){
            ans.push_back(nums);
            return;
        }
        for(int k = i; k < j; k++){
            if(i != k && nums[i] == nums[k]) continue;
            swap(nums[i], nums[k]);
            recursion(nums, i+1, j, ans);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        recursion(nums, 0, nums.size(), ans);

        return ans;
    }
};