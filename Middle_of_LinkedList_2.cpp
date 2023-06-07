/*
https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0
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


//2nd approach (better one)
Node *getMiddle(Node *head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    //2 nodes -- needed or not ?
    if(head -> next -> next == NULL){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;
    }

    return slow;
}

Node *findMiddle(Node *head) {
    
    return getMiddle(head);

}