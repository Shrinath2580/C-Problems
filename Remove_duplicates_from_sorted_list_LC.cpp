/*
https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        //empty list
        if(head == NULL)
            return NULL;
        
        ListNode* curr = head;

        while(curr != NULL){

            if((curr -> next != NULL) && curr -> val == curr -> next -> val ){
                ListNode* next_next = curr -> next -> next;
                ListNode* nodeToDelete = curr -> next;
                delete(nodeToDelete);
                curr -> next = next_next;
            }
            else{

                //not equal

                curr = curr -> next;
            }
        }
        return head;

    }
};