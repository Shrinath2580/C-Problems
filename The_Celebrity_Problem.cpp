/*
https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
Follow Up: Can you optimize it to O(N)
*/

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    bool knows(vector<vector<int>>& M, int a, int b, int n){
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        //step1: push all elements in stack
        for(int i = 0; i<n; i++){
            s.push(i);
        }
        
        //step2: get 2 elements and compare them
        
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M, a, b, n))
                s.push(b);
            else
                s.push(a);
        }
        int ans = s.top();
        //step3: single element in stack in potential celebrity
        // so verify it 
        
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i = 0; i<n; i++){
            if(M[ans][i] == 0)
                zeroCount++;
        }
        
        //all zeroes
        if(zeroCount == n)
            rowCheck = true;
        
        
        //column check
        bool colCheck = false;
        int oneCount = 0;
        
        for(int i = 0; i<n; i++){
            if(M[i][ans] == 1)
                oneCount++;
        }
        
        if(oneCount == n-1)
            colCheck = true;
            
        if(rowCheck == true && colCheck == true)
            return ans;
        else
            return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends