/*
https://leetcode.com/problems/container-with-most-water/description/

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int maxWater = 0;

        while(left < right){
            int area = min(height[left], height[right]) * (right - left);
            maxWater = max(maxWater, area);

            if(height[left] < height[right])
                left++;
            else
                right--;
        }
 
        return maxWater;
    }
};