#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev=0, rem;
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout<<"Reversed Number = "<<rev;
    
}

int main(){
    int n, rev = 0, rem;

    cout<<"Enter the Integer: ";
    cin>>n;

    reverse(n);
    return 0;    
}