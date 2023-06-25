/*
https://leetcode.com/problems/median-of-two-sorted-arrays/description/

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
*/

#include<bit/stdc++.h>
using namespace std;

class Solution {
private:
    bool isEven(int n){
        if(n%2 == 0)
            return true;
        else
            return false;
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());

        if(isEven(ans.size()) == false){
            double median = ans[(ans.size())/2];
            return median;
        }
        else{
            double median = (ans[((ans.size())/2)-1] + ans[(ans.size())/2]);
            return median/2;
        }
    }
};