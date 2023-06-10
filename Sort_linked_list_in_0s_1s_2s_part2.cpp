/*
https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021
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


void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    // create separate list 0s, 1s and 2s
    while(curr != NULL){

        int value = curr -> data;

        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        } else if (value == 2) {
          insertAtTail(twoTail, curr);
        }

        curr = curr->next;
    }

    //merge 3 sublist
    if(oneHead -> next != NULL) { //one ki list non empty hai
        zeroTail -> next = oneHead -> next;
    }  
    else {
        // 1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    //setup head
    head = zeroHead -> next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}


//T.C = O(n);
//S,C = O(1);