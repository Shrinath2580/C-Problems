/*
https://www.codingninjas.com/codestudio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0&campaign=YouTube_codestudio_lovebabbar28thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_codestudio_lovebabbar28thjan
*/

#include<bits/stdc++.h>
using namespace std;

class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            //cout << "Present at value " << slow -> data << endl;
            return slow;
        }

    }

    return NULL;

    
    //T.C = O(n);
    //S.C = O(1);
}


Node* getStartingNode(Node* head){

    if(head == NULL){
        return NULL;
    }
    
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    if(intersection == NULL){
        return NULL;
    }

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}


Node *removeLoop(Node *head)
{
    if(head == NULL){
        return NULL;
    }

    Node* startofLoop = getStartingNode(head);
    if(startofLoop == NULL)
        return head;

    Node* temp = startofLoop;

    while(temp -> next != startofLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;

    return head;
}