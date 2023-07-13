/*
https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
*/

#include<stack>
#include<bits/stdc++.h>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top() >= curr)
            s.pop();
        
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}