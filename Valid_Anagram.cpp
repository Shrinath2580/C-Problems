/*
https://leetcode.com/problems/valid-anagram/description/

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int cnt = 0;
        
        for(int i = 0; i<s.length(); i++){
            if(s[i] == t[i]){
                cnt++;
            }
        }
        
        if(cnt == s.length() && cnt == t.length()){
            return true;
        }
        else{
            return false;
        }
    }
};

