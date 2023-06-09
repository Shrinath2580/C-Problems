/*
https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTab=0
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

Node *removeDuplicates(Node *head)
{
    // //empty list
    // if(head == NULL)
    //     return NULL;

    
    // //non-empty list
    // unordered_map<int, bool> visited;
    // Node* curr = head;
    
    // Node* temp = curr -> next;

    //     while(temp != NULL){
    //         // if(curr -> data == temp -> data){
    //         //     Node* next_next = temp -> next;
    //         //     Node* nodeToDelete = temp;
    //         //     delete(nodeToDelete);
    //         //     temp = next_next;
    //         // }
    //         // else{
    //         //     //not equal
    //         //     temp = temp -> next;
    //         // }

    //         visited[curr -> data] = true;
    //         if(visited[temp -> data] == true){
    //             Node* next_next = temp -> next;
    //             Node* nodeToDelete = temp;
    //             delete(nodeToDelete);
    //             temp = next_next;
    //         } else {
    //           curr = curr->next;
    //         }
    //     }

    // return head;



    // if(head==NULL && head->next==NULL) return head;

    // Node* pre = NULL;
    // Node* curr = head;
    // map<int,bool> visited;
    // while(curr!=NULL){
    //     if(visited[curr->data]!=true){
    //         visited[curr->data] = true;
    //         pre = curr;
    //         curr= curr->next;
    //     }
    //     else{ // curr at dublicate
    //         pre->next = curr->next;
    //         curr = curr->next;
    //     }
    // }
    // return head;


    // if(head==NULL) return NULL;
    // if(head->next==NULL) return head;

    // Node* temp = head;

    // while( (temp!=NULL) ){
        
    //     Node* pre = temp;
    //     Node* curr = temp->next;
    
    //     while(curr!=NULL){
    
    //         if(temp->data==curr->data){
    //             Node* deleteNode = curr;
    //             pre->next = curr->next;
    //             curr = curr->next;
    //             deleteNode->next = NULL;
    //             delete deleteNode;
    //         }
    
    //         else{
    //             pre = curr;
    //             curr = curr->next;
    //         }
      
    //     }
    //     temp = temp->next;
    // }
    // return head;

     if(head==NULL ||head->next==NULL)
    {
        return head;
    }

    Node* curr=head;
    Node* prev=new Node(0);
    prev->next=head;

    map<int,bool>visited; 
 
    while(curr)
    {
        if(visited[curr->data]==true)
        {
            prev->next=curr->next;
            curr=curr->next;
        }
        else
        {
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;
        }      
    }
    return head;
}