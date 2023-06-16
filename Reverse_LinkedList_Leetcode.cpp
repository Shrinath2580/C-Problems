/*
https://leetcode.com/problems/reverse-linked-list/description/

Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
private:
    ListNode* reverse1(ListNode* head){
        //base case
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* chotaHead = reverse1(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return chotaHead;
    } 
public:
    ListNode* reverseList(ListNode* head) {
        return reverse1(head);
    }
};