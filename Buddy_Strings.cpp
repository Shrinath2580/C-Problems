/*
https://leetcode.com/problems/buddy-strings/description/

Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

    For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

*/

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length() || s.length() <= 1)
            return false;

        if(s == goal){
            unordered_set<char> distinctChars(s.begin(), s.end());
            return distinctChars.size() < s.length();
        }

        vector<int> index;
        for(int i = 0; i<s.length(); i++){
            if(s[i] != goal[i])
                index.push_back(i);
        }

        if(index.size() != 2)
            return false;

        swap(s[index[0]], s[index[1]]);
        return s == goal;
    }
};