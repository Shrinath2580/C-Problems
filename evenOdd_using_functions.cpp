#include<iostream>
using namespace std;

//Even Odd
bool isEven(int a) {

    //odd
    if(a&1) {
        return 0;
    }
    
    //even
    return 1;
}

int main() {
    
    int num;
    
    cin>>num;

    if(isEven(num)) {
        cout << "The number is Even" <<endl;
    }
    else {
        cout << "The number is Odd" <<endl;
    }
}
