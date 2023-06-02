#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char ch){
        data = ch;
        next = NULL;
    }
};
void insertAtHead(node* &head, char ch){
    if(head == NULL){
        //we are doing first insertion 
        node* n = new node(ch);
        head = n;
        return;
    }

    // we are inerting B
    node* n = new node(ch);
    n -> next = head;
    head = n;

}
void printLL(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertAtHead(head, 'A');
    insertAtHead(head, 'B');
    insertAtHead(head, 'C');
    printLL(head);
    printLL(head);
    cout<<"success"<<endl;
    return 0;
}