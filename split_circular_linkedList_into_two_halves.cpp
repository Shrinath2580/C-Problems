#include<bits/stdc++.h>
using namespace std;

//Node structure
class Node {
    public:
        int x;
        Node* next;
};

// Function to split a list (starting with head) into two lists

void listSplitter(Node* head, Node **h1, Node** h2){
    Node* slowPtr = head;
    Node* fastPtr = head;
    if(head == NULL){
        return;
    }
    /* If there are odd nodes in the circular linked list then
    fastPtr -> next becomes head and for even nodes
    fastPtr -> next -> becomes head 
    as in case of odd number of nodes first list will contain one node
    more than second list
    */

    while(fastPtr -> next != head && fastPtr -> next -> next != head){
        fastPtr = fastPtr -> next -> next;
        slowPtr = slowPtr -> next;
    }

    if(fastPtr -> next -> next == head)
        fastPtr = fastPtr -> next;
    *h1 = head;
    
    if(head -> next != head)
        *h2 = slowPtr -> next;
    fastPtr -> next = slowPtr -> next;
    slowPtr -> next = head;

}

//utility  functions
void PushNode(Node** head, int x){
    Node* ptr1 = new Node();
    Node* temp = *head;
    ptr1 -> x =x;
    ptr1 -> next = *head;

    /*If linked list is not equal to NULL then set the next of last node*/
    if(*head != NULL){
        while(temp -> next != *head)
            temp = temp -> next;
        temp -> next = ptr1;
    }
    else
        ptr1 -> next = ptr1;
    *head = ptr1;
}


/* Function to print nodes in a given Circular Linked List */
void listPrinter(Node* head){
    string s;
    Node* temp = head;
    if(head != NULL){
        cout << endl;
        do{
            string p = to_string(temp -> x);
            s+=p;
            s.push_back('-');
            s.push_back('>');
            temp = temp -> next;
        }  while(temp != head);
    }
    s.pop_back();
    s.pop_back();
    cout << s << endl;
}


//Drive Code
int main(){
    int listSize, i;
    /* initialize empty linked lists */
    Node* head = NULL;
    Node* h1 = NULL;
    Node* h2 = NULL;
    // Created Linked list wil be 12->16->24->10
    PushNode(&head, 12);
    PushNode(&head, 16);
    PushNode(&head, 24);
    PushNode(&head, 10);

    cout << "Given Circular List: ";
    listPrinter(head);
    //Splitting the list
    listSplitter(head, &h1, &h2);
    cout << "\nFirst Resultant Circular Linked List: ";
    listPrinter(h1);
    cout << "\nSecond Resultant Circular Linked List: ";
    listPrinter(h2);

    
    return 0; 
}