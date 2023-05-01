/*https://leetcode.com/problems/rotate-image/description/ 

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void swap(int* a, int* b)
    {
    int temp = *a;
    *a = *b;
    *b = temp;
    }   
public:

    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); //rows
        int m = matrix[0].size(); // columns
        int temp;
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < m; j++) {
                temp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
 
        // Initialise start and end index
        int start = 0;
        int end = m - 1;
 
        // Till start < end, swap the element
        // at start and end index
        while (start < end) {
 
            // Swap the element
            swap(&matrix[i][start],
                 &matrix[i][end]);
 
            // Increment start and decrement
            // end for next pair of swapping
            start++;
            end--;
            }
        }   


    }
};