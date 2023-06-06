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

LinkedListNode<int>* reverse1(LinkedListNode<int>* head) {

    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    LinkedListNode<int>* chotaHead = reverse1(head->next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;
}


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    
    return reverse1(head);
}