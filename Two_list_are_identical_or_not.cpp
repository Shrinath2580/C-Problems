// CPP program to remove first node of
// linked list.

//two linked list are ideal or not 
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};


Node* removeFirstNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
}

bool areIdentical(Node* a, Node* b){
    while(a != NULL && b != NULL){
        if(a -> data != b -> data)
            return false;
            
        a = a -> next;
        b = b -> next;
    }
    
    return(a == NULL && b == NULL);
}


void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


int main()
{

    Node* head_A = NULL;
    Node* head_B = NULL;

    push(&head_A, 12);
    push(&head_B, 12);
    push(&head_A, 11);
    push(&head_B, 10);
    
    if(areIdentical(head_A,head_B))
        cout << "Identical";
    else
        cout << "Not Identical";


    return 0;
}