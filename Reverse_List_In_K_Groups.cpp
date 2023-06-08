/*
https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan
*/

#include<bits/stdc++.h>
using namespace std;

class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

Node* kReverse(Node* head, int k) {
    
    //base call
    if(head == NULL){
        return NULL;
    }

    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step2: Recursion dekhlega aage ka
    if (next != NULL) {
      head->next = kReverse(next, k);
    }

    // step3: return head of reversed list
    return prev;
}




/*
Time Complexity = O(n);
Space Complexity = O(n);
*/