// return the count of a singly linked list
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

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
    
    cout << "count of nodes are " << getCount(head);

    return 0;
}