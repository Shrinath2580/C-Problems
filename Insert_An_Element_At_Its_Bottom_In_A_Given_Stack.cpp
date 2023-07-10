/*
https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
*/

#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& myStack, int x){

    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    //RECURSIVE CALL
    solve(myStack,x);

    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
