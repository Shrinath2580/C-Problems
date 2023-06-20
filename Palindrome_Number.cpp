/*
https://leetcode.com/problems/palindrome-number/description/

Given an integer x, return true if x is a
palindrome
, and false otherwise.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long int ans = 0;
        if(x < 0)
            return false;
        else{
            while(temp != 0){
                ans = ans * 10 + (temp % 10);
                temp = temp / 10;
            }
            if(ans == x)
                return true;
            else
                return false;
        }
        
    }
};