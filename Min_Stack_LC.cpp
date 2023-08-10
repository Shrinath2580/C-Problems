/*
https://leetcode.com/problems/min-stack/description/

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

    MinStack() initializes the stack object.
    void push(int val) pushes the element val onto the stack.
    void pop() removes the element on the top of the stack.
    int top() gets the top element of the stack.
    int getMin() retrieves the minimum element in the stack.

You must implement a solution with O(1) time complexity for each function.
*/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int>s1,min_st; // we created 2 stack (1st stack is normal,min_st.top() always having minimun element)
    MinStack() {
        int val;
    }
    void push(int val) {
        // for normal stack, val will be always push
        s1.push(val);
        // for min stack(min_st), val will be push in below case
        if(min_st.empty() || val <= min_st.top()){
            min_st.push(val);
        }
    }
    void pop() {
        // pop and push operation will be alwayas from s1 stack
        if(s1.top()== min_st.top()){ //if min_st ka top,s1 top ke equal h to dono stack se pop
           min_st.pop();
        }
        s1.pop(); 
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        //min. val having always with min_st.top()
        return min_st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */