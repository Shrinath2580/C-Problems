//Prime Numberssssssssssss
#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n" <<endl;
    cin>>n;
    bool isPrime=1;
    for(int i=2; i<n; i++) {

        //if rem=0; Not a Prime
        if(n%i==0) {
            //cout<<"Not a Prime number !"<<endl;
            isPrime=0;
            break;          // agar ek baar remainder 0 aa gya tab toh prime hoga hi nahi toh baaki check karenge hi nai.. Sidha break use karenga aur aage badhenge!
        }
    }
    if(isPrime==0){
        cout<<"Not a Prime Number !"<<endl;

    }
    else {
        cout<<"It's a Prime Number !!"<<endl;
    }
}
