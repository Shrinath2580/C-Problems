// find the maximum element in a linked list
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

//adding data in the node
void push(Node** head, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

int greatestElement(Node* head){
    int max = INT_MIN;
    while(head != NULL){
        if(max < head->data)
            max = head->data;
        head = head -> next;
    }
    return max;
}


//getting the count of the node
int getCount(Node* head){
    int count = 0;
    Node* current = head;
    while(current != NULL){
        count++;
        current = current -> next;
    }
    return count;
}

int main() {
    
    Node* head = NULL;
    
    push(&head,1);
    push(&head,3);
    push(&head,5);
    push(&head,7);
    push(&head,8);
    push(&head,9);
    
    cout << "count of nodes are " << getCount(head) << endl;
    cout << "greatest element in a linked list is " << greatestElement(head) << endl;

    return 0;
}