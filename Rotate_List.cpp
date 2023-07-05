/*
https://leetcode.com/problems/rotate-list/description/

Given the head of a linked list, rotate the list to the right by k places.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head)
            return head;

        ListNode* temp = head;
        int len = 1;
        while(temp-> next != NULL){
            temp = temp->next;
            len++;
        }

        if(k > len)
            k = k % len;
        
        k = len - k;

        if(k == 0 || k == len)
            return head;
        

        ListNode* curr = head;
        int cnt = 1;
        while(cnt < k && curr != NULL){
            curr = curr -> next;
            cnt++;
        }

        if(curr == NULL)
            return head;
        
        ListNode* kthnode = curr;

        temp -> next = head;

        head = kthnode -> next;

        kthnode -> next = NULL;

        return head;

    }
};