#include<iostream>
#include<stack>
using namespace std;

class Stack {

    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack OverFlow" << endl;
    }

    void pop(){
        if(top >= 0)
            top--;
        else
            cout << "Stack UnderFlow" << endl;
    } 

    int peek() {
        if(top >= 0)
            return arr[top];
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1)
            return true;
        else    
            return false;
    }
};


int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;


    st.pop();
    cout << st.peek() << endl;


    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty())
        cout<< "Stack is Empty mere dost" << endl;
    else    
        cout <<"Stack is not empty mere dost" << endl;

/*
    //creation of stack
    stack<int> s;

    //insertion of stack
    s.push(2);
    s.push(3);

    //removing the last element
    s.pop();\

    cout << "Printing top element " << s.top()  << endl;

    //check if stack is empty or not
    if(s.empty())
        cout << "The stack is empty " << endl;
    else
        cout << "The stack is non-empty" << endl;

    cout << "Size of stack is  " << s.size() << endl;
*/  

}