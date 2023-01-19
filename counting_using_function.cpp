#include<iostream>
using namespace std;

//Counting

    //Funtion Signature
void printCounting(int n) {

    //Funtion Body
    for (int i=1; i<=n; i++) {
        cout<< i  <<" ";
    }
    cout<<endl;

} 

int main() {

    int n;
    cin >> n;

    //funtion call
    printCounting(n);

    return 0;
}
