#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insert at Start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }


    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at Last position
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}


void deleteNode(int position, Node* &head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;

        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else {

        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

bool detectLoop(Node* head){
     
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;
    while(temp != NULL){

        //cycle is present
        if(visited[temp] == true){
           cout << "Present on element " << temp -> data << endl;
           return true;
        }
       visited[temp] = true;
       temp = temp -> next;
    }

    return false;

    //T.C = O(n);
    //S.C = O(n);
}


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

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startofLoop = getStartingNode(head);
    Node* temp = startofLoop;

    while(temp -> next != startofLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;
}



int main(){

//created a new node
    Node* node1 = new Node(10);

//head pointed to node1

    Node* head = node1;


//tail pointed to node1
    
    Node* tail = node1;
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(tail, head, 4, 22);
    print(head);

    tail -> next = head -> next;

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    // if(detectLoop(head)){
    //     cout << "Cycle is present " << endl;
    // }
    // else{
    //     cout << "Cycle is not present " << endl;
    // }

    if(floydDetectLoop(head)){
        cout << "Cycle is present " << endl;
    }
    else{
        cout << "Cycle is not present " << endl;
    }


    Node* loop = getStartingNode(head);

    cout << " loop starts at " << loop -> data << endl;


    removeLoop(head);
    print(head);

    return 0;
}