/*
https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
*/
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& stack, int element){

    if(stack.empty()){
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, element);

    stack.push(num);
}

void reverseStack(stack<int> &stack) {
    // base case
    if(stack.empty())
        return;
    
    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);


}