#include<iostream>
using namespace std;

int score = 15;

void a(int& i){
    cout << score << " in a " << endl;
    //score++;
}

void b(int& i){
    cout << score << " in b " << endl;

}

int main(){
    int i = 5;
    cout << score << " in main " << endl;
    a(i);
    b(i);

    return 0;

}

// lekin yeh kabhi use karna nahi hai hume
// this is BAD PRACTICE. 

// nuksaan yeh hai ki kisi bhi function ne isko change kar diya toh baaki functions ke liye bhi change ho jayegaaa...

// solution kya hai fir iskaa 
// simple hai 
// apne reference variable wala concept use karlo
