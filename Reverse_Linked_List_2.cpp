/*
https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0
*/

#include<bits/stdc++.h>
using namespace std;


template <typename T>
class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
};


void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return ;
    }

    LinkedListNode<int>* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    reverse(head, curr, prev);
    return head;
}
