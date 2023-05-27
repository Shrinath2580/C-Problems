#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello Shrinath Mishra" << endl;
    }

    int sayHello(char name) {
        cout << "Hello Shrinath" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello Mishra" << endl;
    }

};

int main(){

    A obj;
    obj.sayHello();


    return 0;

}