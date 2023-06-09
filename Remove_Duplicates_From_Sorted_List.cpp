/*
https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=0&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan
*/

#include<bits/stdc++.h>
using namespace std;

class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
};


Node * uniqueSortedList(Node * head) {
    
    //empty list
    if(head == NULL)
        return NULL;

    //non empty list
    Node* curr = head;

    while(curr != NULL){

        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
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


//T.C = O(n);
//S.C = O(1);