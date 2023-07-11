/*
https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
*/

#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>& stack, int num){

	if(stack.empty() || (!stack.empty() && stack.top() < num)){
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	//recursive call
	sortedInsert(stack, num);

	stack.push(n);

}


void sortStack(stack<int> &stack)
{
	//base case
	if(stack.empty())
		return;
	
	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedInsert(stack, num);
}